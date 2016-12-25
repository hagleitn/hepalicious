#ifndef TEMPERATOR_SENSOR_H
#define TEMPERATOR_SENSOR_H

#include <Arduino.h>

class TemperatureSensor {
 public:
  TemperatureSensor(int pin);
  ~TemperatureSensor();

  int getTemperature();
  float getTemperatureCelsius();
  void begin();
  void update();

 private:
  int pin;
  int temperature;
};

#endif
