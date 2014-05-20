#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
	static const double OFFSET = 16;
	double popNextPressurePsiValue();

private:
	static double samplePressure();
};

#endif /* SENSOR_H */
