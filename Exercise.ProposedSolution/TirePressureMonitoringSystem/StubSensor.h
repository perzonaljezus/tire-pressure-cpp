#ifndef STUBSENSOR_H
#define STUBSENSOR_H

#include "Transducer.h"
#include <queue>

class StubSensor : public Transducer {
public:
	void setStubPressureValue(double pressureValue);
	void setStubPressureValue(double pressureValue1, double pressureValue2, double pressureValue3);
	double popNextPressurePsiValue() override;

private:
	double stubPressureValue;
	std::queue<double> queue;
};

#endif /* STUBSENSOR_H */