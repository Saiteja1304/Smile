#!/bin/sh
sudo cp -a include/. /usr/local/include/Smile
sudo cp build/libSmile.so /usr/local/lib/
set LD_LIBRARY_PATH /usr/local/lib/
export LD_LIBRARY_PATH