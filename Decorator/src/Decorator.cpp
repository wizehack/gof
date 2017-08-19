/*
 * Decorator.cpp
 *
 *  Created on: 2014. 4. 23.
 *      Author: hyunsangyoun
 */

#include "Decorator.h"

namespace std {

Decorator::Decorator(Poster* poster) {
	_poster = poster;
}

Decorator::~Decorator() {}

void Decorator::display(){
	_poster->display();
}

} /* namespace std */
