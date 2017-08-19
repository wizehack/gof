/*
 * Director.h
 *
 *  Created on: 2014. 4. 24.
 *      Author: hyunsangyoun
 */

#ifndef DIRECTOR_H_
#define DIRECTOR_H_
#include "Builder.h"
#include <memory>

class Director {
public:
	Director();
	virtual ~Director();
	void parse(Builder& builder);
private:
};

#endif /* DIRECTOR_H_ */
