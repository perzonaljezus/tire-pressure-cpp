#ifndef STUBSENSOR_H
#define STUBSENSOR_H

#include "Transducer.h"

class StubSensor : public Transducer {
public:
	void setStubPressureValue(double pressureValue);
};

#endif /* STUBSENSOR_H */