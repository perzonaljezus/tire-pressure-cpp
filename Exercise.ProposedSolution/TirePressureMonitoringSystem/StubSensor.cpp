#include "StubSensor.h"

void StubSensor::setStubPressureValue(double pressureValue) {
	queue.push(pressureValue);
}

void StubSensor::setStubPressureValue(double pressureValue1, double pressureValue2, double pressureValue3) {
	queue.push(pressureValue1);
	queue.push(pressureValue2);
	queue.push(pressureValue3);
}

double StubSensor::popNextPressurePsiValue() {
	if (queue.empty()) {
		return 0.0;
	}

	double pressureValue = queue.front();
	queue.pop();
	return pressureValue;
}