#!/bin/bash
echo Press 'm' to enable Monitor mode and start execution
echo Press 's' to enable Station mode
echo Choose Input and press ENTER
read a


#Choice commitment 
if [ $a == m ] 
then 

	ifconfig	
	echo enabling monitor mode
	sleep 1
	bash scripts/mon.sh
	sleep 1
	bash scripts/deauth.sh
	sleep 1
	bash scripts/master.sh
fi
if [ $a == s ] 
then 
	echo Enabling Normal Mode
	sleep 1
	bash scripts/norm.sh
	sleep 2
	bash scripts/master.sh
fi

