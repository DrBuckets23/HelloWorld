// I, Andrew Maye, 000344062 verify that this work is my own and no one elses.
#include <Arduino.h>
unsigned long myTime;

void setup() {
  // put your setup code here, to run once:

  // Start the usb serial monitor port
  Serial.begin(115200);

  // Print some text to the usb port
  String myName = "Andrew Maye";
  String myId = "000344062";
  
  String myFlash = String (ESP.getFlashChipId());
  String myChipId = String (ESP.getChipId());
  Serial.println("My name is: " + myName + myId);
  Serial.println("My ESP8266 Chip ID: " + myFlash + "  My Flash Chip ID: " +myChipId);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  myTime = millis();

  Serial.println(myTime); // Prints time since program started
  delay(2000); //2 second delay
}