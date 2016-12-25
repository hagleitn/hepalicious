#include "Fan.h"

Fan::Fan() {}

Fan::~Fan() {}

void Fan::begin() {
}

uint8_t Fan::getSpeed() {
  return speed;
}

void Fan::setSpeed(uint8_t speed) {
  this->speed = speed;
}

void Fan::adjust(double x) {
  if (x > 1) x = 1;
  if (x < -1) x = -1;

  setSpeed((uint8_t)((x+1)/2*255));
}
