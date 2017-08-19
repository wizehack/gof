//============================================================================
// Name        : FlyweightPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "FlyweightFactory.h"
#include "Flyweight.h"
#include <iostream>
using namespace std;

int main() {
	FlyweightFactory* pool = new FlyweightFactory();
	Flyweight* obj_A = pool->getCharacter('H');
	obj_A->draw(0, 0);
	Flyweight* obj_B = pool->getCharacter('E');
	obj_B->draw(0, 1);
	Flyweight* obj_C1 = pool->getCharacter('L');
	obj_C1->draw(3, 2);
	Flyweight* obj_C2 = pool->getCharacter('L');
	obj_C2->draw(4, 3);
	Flyweight* obj_C3 = pool->getCharacter('O');
	obj_C3->draw(5, 4);

	delete pool;
	return 0;
}
