/*
 * Director.cpp
 *
 *  Created on: 2014. 4. 24.
 *      Author: hyunsangyoun
 */

#include "Director.h"
#include "Builder.h"

Director::Director() {}

Director::~Director() {}

void Director::parse(Builder& builder){
	builder.fillStatement();
	builder.extractMembers();
}
