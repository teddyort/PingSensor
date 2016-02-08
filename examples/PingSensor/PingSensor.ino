/*
  PingSensor.h - Library for using a ping sensor to measure distance
  Created by Teddy Ort (Adapted from 2.007 website code.)
*/

#include <PingSensor.h>

//Set the pin of the sensor
#define pinPing 9

//Declare PingSensor object
  PingSensor mySensor(pinPing);
  
void setup(){
  //Start Serial
  Serial.begin(9600);
}

void loop(){
  Serial.print(mySensor.getDist());
  Serial.println(" in");
  delay(100);
}