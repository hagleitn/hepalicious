#ifndef SIGNAL_LISTENER_H
#define SIGNAL_LISTENER_H

#include "Arduino.h"

class SignalListener {
public:
  virtual void update(double x, long time) = 0;
};

#endif
