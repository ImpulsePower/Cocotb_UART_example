module cocotb_iverilog_dump();
initial begin
    $dumpfile("/home/imp/work/uart/test/../test/build/uart_rx/icarus/uart_rx.fst");
    $dumpvars(0, uart_rx);
end
endmodule
