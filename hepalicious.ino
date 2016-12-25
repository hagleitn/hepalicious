#ifndef SIM
//#define DEBUG 1
#endif

#include "Fan.h"
#include "TemperatureSensor.h"

#define T1_PIN 1
#define T2_PIN 2
#define DELAY 500

Fan fan;
TemperatureSensor inside(T1_PIN);
TemperatureSensor outside(T2_PIN);

void setup() {
#ifdef DEBUG
  Serial.begin(9600);
#endif

  fan.begin();
  inside.begin();
  outside.begin();
}

void loop() {
  delay(DELAY);
  inside.update();
  outside.update();
}
