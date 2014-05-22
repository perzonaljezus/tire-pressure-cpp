#ifndef SENSOR_H
#define SENSOR_H

#include <random>

// TODO: Inherit Transducer
class Sensor {
public:
	static const double OFFSET;
	double popNextPressurePsiValue();

private:
	static double samplePressure();
};

#endif /* SENSOR_H */
