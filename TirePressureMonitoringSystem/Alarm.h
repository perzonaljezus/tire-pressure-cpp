#ifndef ALARM_H
#define ALARM_H

#include "Sensor.h"

class Alarm {
public:
	Alarm();
	void check();
	bool isAlarmOn();
private:
	static const double LowPressureThreshold;
	static const double HighPressureThreshold;
	Sensor* sensor;
	bool alarmOn;
};

#endif /* ALARM_H */