//============================================================================
// Name        : VisitorPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "Visitor.h"
#include "ConcreteVisitor.h"

#include <iostream>
#include <list>
using namespace std;

int main() {
	list<Element*> objectStructure;
	objectStructure.push_back(new ConcreteElementA());
	objectStructure.push_back(new ConcreteElementB());

	Visitor* v = new ConcreteVisitor();
	list<Element*>::iterator p = objectStructure.begin();

	while(p != objectStructure.end()) {
		(*p)->accept(*v);
		p++;
	}

	p = objectStructure.begin();
	while(p != objectStructure.end()) {
		delete (*p);
		p++;
	}

	delete v;

	return 0;
}
