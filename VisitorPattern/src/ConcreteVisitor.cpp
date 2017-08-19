/*
 * ConcreteVisitor.cpp
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#include "ConcreteVisitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

ConcreteVisitor::ConcreteVisitor() {}

ConcreteVisitor::~ConcreteVisitor() {}

void ConcreteVisitor::visitConcreteElementA(ConcreteElementA* element){
	element->operationA();
}

void ConcreteVisitor::visitConcreteElementB(ConcreteElementB* element){
	element->operationB();
}
