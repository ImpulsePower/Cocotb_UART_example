# Vivado settings
set_param general.maxThreads 4

# build settings
set design_name "UART"
set board_name  "ANTSDR_E310"
set FPGA_part   "xa7z020clg400-1I"

set_part "${FPGA_part}"

# STEP#0: define output directory area.
set origin_dir  [file normalize "../../"]
set build_dir   [file normalize "${origin_dir}/build/"]
set project_dir [file normalize "${origin_dir}/project"]
set src_dir     [file normalize "${origin_dir}/src"]
set fw_dir      [file normalize "${origin_dir}/firmware"]
set dcp_dir     [file normalize "${build_dir}/dcp"]
set rpt_dir     [file normalize "${build_dir}/rpt"]

# STEP#1: setup design sources and constraints
# read design sources
read_verilog -sv "${src_dir}/header.sv"
# read constraints
read_xdc "${src_dir}/constraints.xdc"
# read bd
# read_bd "${project_dir}/project.srcs/sources_1/bd/zynq_design/zynq_design.bd"
# read ip
read_ip "${project_dir}/project.srcs/sources_1/ip/clk_wiz/clk_wiz.xci"

# STEP#2: run synthesis, report utilization and timing estimates, write checkpoint design
synth_design -top "${design_name}_top" -part ${FPGA_part}
write_checkpoint -force "${dcp_dir}/post_synth"
report_timing_summary -file "${rpt_dir}/post_synth_timing_summary.rpt"
report_power -file "${rpt_dir}/post_synth_power.rpt"

# STEP#3: run placement and logic optimzation, report utilization and timing estimates, write checkpoint design
opt_design
place_design
phys_opt_design
write_checkpoint -force "${dcp_dir}/post_place"
report_timing_summary -file "${rpt_dir}/post_place_timing_summary.rpt"

# STEP#4: run router, report actual utilization and timing, write checkpoint design, run drc, write verilog and xdc ou
route_design
write_checkpoint -force "${dcp_dir}/post_route"
report_timing_summary -file "${rpt_dir}/post_route_timing_summary.rpt"
report_timing -sort_by group -max_paths 100 -path_type summary -file "${rpt_dir}/post_route_timing.rpt"
report_clock_utilization -file "${rpt_dir}/clock_util.rpt"
report_utilization -file "${rpt_dir}/post_route_util.rpt"
report_power -file "${rpt_dir}/post_route_power.rpt"
report_drc -file "${rpt_dir}/post_imp_drc.rpt"

# STEP#5: generate a bitstream
write_bitstream -force "${fw_dir}/${board_name}_${design_name}.bit"
