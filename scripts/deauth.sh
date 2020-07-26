#!/bin/bash
var1=$1
var2="mon"
var3=$var1$var2
read ch
sudo mdk3 "$var3" d -c $ch -s 10
echo releasing channel $ch
sleep 4