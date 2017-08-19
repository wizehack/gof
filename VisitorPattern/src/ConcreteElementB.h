/*
 * ConcreteElementB.h
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEELEMENTB_H_
#define CONCRETEELEMENTB_H_

#include "Element.h"
#include "Visitor.h"

class Visitor;
class ConcreteElementB: public Element {
public:
	ConcreteElementB();
	virtual ~ConcreteElementB();
	virtual void accept(Visitor& v);
	void operationB();
};

#endif /* CONCRETEELEMENTB_H_ */
