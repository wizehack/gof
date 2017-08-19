/*
 * ConcreteElementA.h
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEELEMENTA_H_
#define CONCRETEELEMENTA_H_

#include "Element.h"
#include "Visitor.h"

class Visitor;
class ConcreteElementA: public Element {
public:
	ConcreteElementA();
	virtual ~ConcreteElementA();
	virtual void accept(Visitor& v);
	void operationA();
};

#endif /* CONCRETEELEMENTA_H_ */
