#ifndef TRANSDUCER_H
#define TRANSDUCER_H

class Transducer {
public:
	double virtual popNextPressurePsiValue() = 0;
};

#endif