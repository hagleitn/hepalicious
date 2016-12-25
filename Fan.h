#ifndef FAN_H
#define FAN_H

#include <Arduino.h>
#include "ControlListener.h"

class Fan : ControlListener {
 public:
  Fan();
  virtual ~Fan();

  void setSpeed(uint8_t speed);
  uint8_t getSpeed();
  void begin();
  virtual void adjust(double x);

 private:
  uint8_t speed;
};

#endif
