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
