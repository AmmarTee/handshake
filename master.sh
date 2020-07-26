#!/bin/bash
dir = $(pwd)
#Initializing two variables
echo Press 'm' to enable Monitor mode ans Start execution
echo Press 's' to enable Station mode

echo Choose Input and press ENTER
read a


#Choice commitment 
if [ $a == m ] 
then 

	/sbin/ip -4 -o a | cut -d ' ' -f 2
	echo Enter Wireles interface which supports monitor mode		
	read inter	
	echo enabling monitor mode execute
	sleep 1
	bash scripts/mon.sh $inter
	sleep 2
	echo Select channel to False Handshake:
	bash scripts/deauth.sh $inter	 
fi
if [ $a == s ] 
then 
	echo Enabling Normal Mode
	sleep 1
	bash scripts/norm.sh
	sleep 2
	bash scripts/master.sh
fi

