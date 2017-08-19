/*
 * Flyweight.h
 *
 *  Created on: 2014. 5. 6.
 *      Author: wizehack
 */

#ifndef FLYWEIGHT_H_
#define FLYWEIGHT_H_
#include <string>

class Flyweight {
public:
	Flyweight();
	virtual ~Flyweight();
	virtual void draw(int extrinsicStateX, int extrinsicStateY)=0;
};

#endif /* FLYWEIGHT_H_ */
