# MITM handshake Using Airmon-ng and mdk3 dependencies<br>
This is a program to automate the False handshake MITM Protocol<br>
How to use:<br>
1- Install dependencies and packages using install.sh<br>
2- Run master.sh in terminal<br>
3- Enable monitor mode<br>
5- Select Channel to initiate the attack<br>
6- Use ctrl+c to exit and stop the attack<br>

This program uses Wifi interface to replicate the identities of User and Router deauths it and send deassociate packates whenever User tries to reconnect <br>

<h1>Using Injection Tool</h1>
1- Select the channel you desire and upload the code to Digispark AtTiny85.
2- Boot your raspberry pi in CLI/Autologin Mode (Wait for 2 Minutes).
3- Plug AtTiny85 into Raspberry pi.
4- Raspberry Will start the False Handshake in approx. 1 Minute.
5- UnPlug Raspberry to stop the execution.
