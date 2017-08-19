/*
 * TeamJangDecorator.cpp
 *
 *  Created on: 2014. 4. 23.
 *      Author: hyunsangyoun
 */

#include "TeamJangDecorator.h"
#include "Decorator.h"
#include <string>
#include <iostream>
namespace std {

TeamJangDecorator::TeamJangDecorator(Poster* poster):Decorator(poster){
	this->decoMessage = "우.유.빛.깔.\n팀.장.님";
}

TeamJangDecorator::~TeamJangDecorator() {}

void TeamJangDecorator::display(){
	_poster->display();
	cout << "팀.장.님." << endl;
	displayDecoMessage();
}

void TeamJangDecorator::displayDecoMessage(){
	cout << this->decoMessage << endl;
}
} /* namespace std */
