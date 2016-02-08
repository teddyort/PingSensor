/*
  PingSensor.h - Library for using a ping sensor to measure distance
  Created by Teddy Ort (Adapted from 2.007 website code.)
*/

#include "Arduino.h"
#include "PingSensor.h"

PingSensor::PingSensor(int pinPing){
  //Setup all the pin
  _pinPing = pinPing;  
}

float PingSensor::getDist() {
  // establish variables for duration of the ping, 
  // and the distance result in inches:
  long duration, inches;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(_pinPing, OUTPUT);
  digitalWrite(_pinPing, LOW);
  delayMicroseconds(2);
  digitalWrite(_pinPing, HIGH);
  delayMicroseconds(5);
  digitalWrite(_pinPing, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(_pinPing, INPUT);
  duration = pulseIn(_pinPing, HIGH, 1e5);

  return duration / 74. / 2.;  // convert the time into a distance
}