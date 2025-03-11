module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/imp/work/field/test/../test/sim_build/uart_tx/uart_tx.fst");
    $dumpvars(0, uart_tx);
end
endmodule
