/*
 * ConcreteFlyweight.h
 *
 *  Created on: 2014. 5. 7.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEFLYWEIGHT_H_
#define CONCRETEFLYWEIGHT_H_

#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight {
public:
	ConcreteFlyweight(char character);
	virtual ~ConcreteFlyweight();
	void draw(int extrinsicStateX, int extrinsicStateY);
private:
	const char intrinsicState;
};

#endif /* CONCRETEFLYWEIGHT_H_ */
