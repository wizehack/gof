//============================================================================
// Name        : MementoPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Originator.h"
#include "Caretaker.h"
#include "Memento.h"

#include <iostream>
using namespace std;

int main() {
	Originator *originator = new Originator();
	originator->setState(1);
	std::cout << originator->getState() << std::endl;

	Caretaker<Originator>* caretaker = new Caretaker<Originator>();

	//create Memento && Save State
	Memento<Originator>* memento = caretaker->saveState(originator);

	//change state
	originator->setState(2);
	std::cout << originator->getState() << std::endl;

	originator->setState(3);
	std::cout << originator->getState() << std::endl;
	delete originator;

	//restore state
	originator = caretaker->restoreState(memento);
	std::cout << originator->getState() << std::endl;
	delete caretaker;
	delete originator;

	return 0;
}
