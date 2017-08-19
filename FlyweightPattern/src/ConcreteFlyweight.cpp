/*
 * ConcreteFlyweight.cpp
 *
 *  Created on: 2014. 5. 7.
 *      Author: hyunsangyoun
 */

#include "ConcreteFlyweight.h"
#include <iostream>
#include <stdio.h>

ConcreteFlyweight::ConcreteFlyweight(char character):intrinsicState(character) {}

ConcreteFlyweight::~ConcreteFlyweight() {}

void ConcreteFlyweight::draw(int extrinsicStateX, int extrinsicStateY){
	// move a cursor according to the input position.
	// draw a character
	//	std::cout << this->intrinsicState;
}
