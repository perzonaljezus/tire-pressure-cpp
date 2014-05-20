#ifndef ALARM_H
#define ALARM_H

class Alarm {
public:
	void check();
	bool isAlarmOn();
private:
	const double LowPressureThreshold = 17;
	const double HighPressureThreshold = 21;
	Sensor sensor = new Sensor;
	bool alarmOn = false;
};

#endif /* ALARM_H */