#include "Alarm.h"

void Alarm::check() {
	double psiPressureValue = transducer->popNextPressurePsiValue();

	if (psiPressureValue < LowPressureThreshold || HighPressureThreshold < psiPressureValue) {
		alarmOn = true;
	}
}

bool Alarm::isAlarmOn() {
	return alarmOn;
}

Alarm::Alarm() {
	transducer = new Sensor;
	alarmOn = false;
}

Alarm::Alarm(Transducer* transducer) {
}

const double Alarm::LowPressureThreshold = 17;
const double Alarm::HighPressureThreshold = 21;