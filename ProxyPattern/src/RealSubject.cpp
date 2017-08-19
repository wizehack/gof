/*
 * RealSubject.cpp
 *
 *  Created on: 2014. 5. 15.
 *      Author: hyunsangyoun
 */

#include "RealSubject.h"
#include <iostream>

RealSubject::RealSubject() {}

RealSubject::~RealSubject() {}

int RealSubject::request(int x, int y){
	std::cout << "RealSubject->request() is called" << std::endl;
	return x + y;
}

int RealSubject::simpleRequest(){
	std::cout << "RealSubject->simpleRequest() is called" << std::endl;
	return 0;
}
