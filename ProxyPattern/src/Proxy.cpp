/*
 * Proxy.cpp
 *
 *  Created on: 2014. 5. 15.
 *      Author: hyunsangyoun
 */

#include "Proxy.h"
#include <iostream>

Proxy::Proxy():_subject(0) {}

Proxy::~Proxy() {
	delete _subject;
}

int Proxy::simpleRequest(){
	std::cout << "proxy->simpleRequest() is called" << std::endl;
	return 0;
}

int Proxy::request(int x, int y){
	std::cout << "proxy->request() is called" << std::endl;

	if(_subject == 0){
		_subject = new RealSubject();
	}

	return _subject->request(x, y);
}
