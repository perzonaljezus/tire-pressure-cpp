#ifndef SENSOR_H
#define SENSOR_H

#include <random>

class Sensor {
public:
	static const double OFFSET = 16;
	double popNextPressurePsiValue();

private:
	static double samplePressure();
};

#endif /* SENSOR_H */
