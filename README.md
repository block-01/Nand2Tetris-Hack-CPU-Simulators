# Nand2Tetris-Hack-CPU-Simulators

Hardware and software simulators for the Hack CPU from Nand2Tetris.

This is intended for the testing of the CPU developed in [Nand2Tetris-verilog](https://github.com/block-01/nand2tetris-verilog).
## Build
### Software Simulator

```shell
cmake -DBUILD_HARDWARE_SIM=ON -B build
cmake --build build
```

### Hardware Simulator

```shell
cmake -DBUILD_HARDWARE_SIM=ON -B build
cmake --build build
```

### Both

```shell
cmake -DBUILD_SOFTWARE_SIM=ON -DBUILD_HARDWARE_SIM=ON -B build
cmake --build build
```
