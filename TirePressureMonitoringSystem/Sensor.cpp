#include "Sensor.h"

double Sensor::popNextPressurePsiValue() {
	double pressureTelemetryValue;
	pressureTelemetryValue = samplePressure();

	return OFFSET + pressureTelemetryValue;
}

double Sensor::samplePressure() {
	// placeholder implementation that simulate a real sensor in a real tire
	std::default_random_engine engine;
	std::uniform_real_distribution<double> uniform(0,1);
	double pressureTelemetryValue = 6 * uniform(engine) * uniform(engine);
	return pressureTelemetryValue;
}

const double Sensor::OFFSET = 16;