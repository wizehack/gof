/*
 * ConcreteVisitor.h
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETEVISITOR_H_
#define CONCRETEVISITOR_H_
#include "Visitor.h"

class ConcreteVisitor: public Visitor {
public:
	ConcreteVisitor();
	virtual ~ConcreteVisitor();
	virtual void visitConcreteElementA(ConcreteElementA* element);
	virtual void visitConcreteElementB(ConcreteElementB* element);
};

#endif /* CONCRETEVISITOR_H_ */
