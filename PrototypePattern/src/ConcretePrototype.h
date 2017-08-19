/*
 * ConcretePrototype.h
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEPROTOTYPE_H_
#define CONCRETEPROTOTYPE_H_

#include "Prototype.h"

class ConcretePrototype: public Prototype {
public:
	ConcretePrototype();
	ConcretePrototype(const Prototype& selfObj);
	virtual ~ConcretePrototype();
	virtual Prototype* clone() const;
	int getState();
	void setState(int state);
private:
	int _state;
};

#endif /* CONCRETEPROTOTYPE_H_ */
