/*
 * Visitor.h
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#ifndef VISITOR_H_
#define VISITOR_H_

class ConcreteElementA;
class ConcreteElementB;
class Visitor {
public:
	Visitor();
	virtual ~Visitor();
	virtual void visitConcreteElementA(ConcreteElementA* element)=0;
	virtual void visitConcreteElementB(ConcreteElementB* element)=0;

};

#endif /* VISITOR_H_ */
