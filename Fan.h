#ifndef _FAN_H
#define _FAN_H

#include <Arduino.h>

class Fan {
 public:
  Fan();
  ~Fan();

  void setSpeed(uint8_t speed);
  uint8_t getSpeed();
  void begin();

 private:
  uint8_t speed;
};

#endif
