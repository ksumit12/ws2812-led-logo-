#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <DNSServer.h>
#include <WiFiManager.h>

void setup(){

Serial.begin(115200);
WiFiManager wifimanager;
Serial.println("connecting>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
wifimanager.autoConnect("ESP8266");
Serial.println("connected");
}

void loop(){
  
}
