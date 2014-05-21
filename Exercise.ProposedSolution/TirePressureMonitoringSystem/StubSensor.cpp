#include "StubSensor.h"

void StubSensor::setStubPressureValue(double pressureValue) {
	stubPressureValue = pressureValue;
}

void StubSensor::setStubPressureValue(double pressureValue1, double pressureValue2, double pressureValue3) {
}

double StubSensor::popNextPressurePsiValue() {
	return stubPressureValue;
}