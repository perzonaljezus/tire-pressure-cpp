#ifndef ALARM_H
#define ALARM_H

#include "gtest/gtest.h"
#include "Transducer.h"

class Alarm {
public:
	Alarm();
	Alarm(Transducer *transducer);
	void check();
	bool isAlarmOn();
private:
	static const double LowPressureThreshold;
	static const double HighPressureThreshold;
	Transducer* transducer;
	bool alarmOn;
};

#endif /* ALARM_H */