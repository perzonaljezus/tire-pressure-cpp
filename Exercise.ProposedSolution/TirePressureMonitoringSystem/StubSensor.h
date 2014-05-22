#ifndef STUBSENSOR_H
#define STUBSENSOR_H

#include "Transducer.h"

class StubSensor : public Transducer {
public:
  void setStubPressureValue(double);
  double popNextPressurePsiValue();

private:
  double stubPressureValue;
};

#endif STUBSENSOR_H /* STUBSENSOR_H */