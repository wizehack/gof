/*
 * Calender.h
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#ifndef CALENDER_H_
#define CALENDER_H_

#include <string>

class Calender {
public:
	Calender();
	~Calender();
	bool changeSchedule(std::string place, bool ASAP);
};

#endif /* CALENDER_H_ */
