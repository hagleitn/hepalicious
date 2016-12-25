#include "TemperatureSensor.h"

TemperatureSensor::TemperatureSensor(int pin) : pin(pin), temperature(0) {}

TemperatureSensor::~TemperatureSensor() {}

void TemperatureSensor::begin() {
  analogReference(INTERNAL);
}

void TemperatureSensor::update() {
  temperature = analogRead(pin);
}

int TemperatureSensor::getTemperature() {
  return temperature;
}

float TemperatureSensor::getTemperatureCelsius() {
  return temperature / 0.31f;
}
