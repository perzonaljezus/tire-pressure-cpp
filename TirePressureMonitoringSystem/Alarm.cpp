#include "Alarm.h"

void Alarm::check() {
	double psiPressureValue = sensor.popNextPressurePsiValue();

	if (psiPressureValue < LowPressureThreshold || HighPressureThreshold < psiPressureValue) {
		alarmOn = true;
	}
}

bool Alarm::isAlarmOn() {
	return alarmOn;
}
