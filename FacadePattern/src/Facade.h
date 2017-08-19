/*
 * Facade.h
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#ifndef FACADE_H_
#define FACADE_H_

#include <string>

class Facade {
public:
	Facade();
	~Facade();
	bool reservEmergencyBusinessTrip(std::string place);
};

#endif /* FACADE_H_ */
