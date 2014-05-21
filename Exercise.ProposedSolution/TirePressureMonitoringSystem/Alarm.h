#ifndef ALARM_H
#define ALARM_H

#include "gtest/gtest.h"
#include "Sensor.h"
#include "StubSensor.h"

class Alarm {
public:
	Alarm();
	Alarm(Transducer *transducer);
	void check();
	bool isAlarmOn();
private:
	static const double LowPressureThreshold;
	static const double HighPressureThreshold;
	Sensor* sensor;
	bool alarmOn;
};

#endif /* ALARM_H */