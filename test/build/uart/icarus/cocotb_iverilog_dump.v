module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/imp/work/uart/test/../test/build/uart/icarus/uart.fst");
    $dumpvars(0, uart);
end
endmodule
