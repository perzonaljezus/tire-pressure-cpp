#include "StubSensor.h"

void StubSensor::setStubPressureValue(double pressureValue) {
	stubPressureValue = pressureValue;
}

double StubSensor::popNextPressurePsiValue() {
	return 0.0;
}