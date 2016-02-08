/*
  PingSensor.h - Library for using a ping sensor to measure distance
  Created by Teddy Ort (Adapted from 2.007 website code.)
*/

#ifndef PingSensor_h
#define PingSensor_h

#include "Arduino.h"

class PingSensor
{
  public:
    PingSensor(int pinPing);
    float getDist();
  private:
    int _pinPing;
};

#endif