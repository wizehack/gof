/*
 * Airline.h
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#ifndef AIRLINE_H_
#define AIRLINE_H_

#include <string>

class Airline {
public:
	Airline();
	~Airline();
	bool reserve(std::string place);
};

#endif /* AIRLINE_H_ */
