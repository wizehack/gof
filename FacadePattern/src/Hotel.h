/*
 * Hotel.h
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#ifndef HOTEL_H_
#define HOTEL_H_

#include <string>

class Hotel {
public:
	Hotel();
	~Hotel();
	bool reserve(std::string place);
};

#endif /* HOTEL_H_ */
