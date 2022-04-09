#!/bin/bash
export CROSS_COMPILE=/opt/FriendlyARM/toolschain/4.5.1/bin/arm-none-linux-gnueabi-
export ARCH=arm

make clean && make distclean
make smart210_config
make -j$(nproc)
