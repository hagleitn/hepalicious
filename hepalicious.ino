#ifndef SIM
//#define DEBUG 1
#endif

#include "Fan.h"

Fan fan;

void setup() {
  Serial.begin(9600);
  fan.begin();
}

void loop() {
}
