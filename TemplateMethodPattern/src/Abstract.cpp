/*
 * Abstract.cpp
 *
 *  Created on: 2014. 4. 15.
 *      Author: hyunsangyoun
 */

#include "Abstract.h"
#include "Concrete.h"

namespace std {

Abstract::Abstract() {}

Abstract::~Abstract() {}

void Abstract::integrate(){
	Concrete* con = new Concrete();
	con->process1();
	con->process2();
	con->process3();
	delete con;
}

void Abstract::process1(){};
void Abstract::process2(){};
void Abstract::process3(){};


} /* namespace std */
