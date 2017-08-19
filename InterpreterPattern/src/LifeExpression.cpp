/*
 * LifeExpression.cpp
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#include "LifeExpression.h"
#include "Robot.h"

#include <iostream>

LifeExpression::LifeExpression(){}

LifeExpression::~LifeExpression() {}

void LifeExpression::interpret(Context& context, Robot& robot){
	if(context.getTag() == "YOUR_NAME_IS"){
		robot.setName(context.getValue());
	} else if (context.getTag() == "BYE") {
		if(robot.getName() == context.getValue()){
			std::cout << "bye master!" << std::endl;
		} else {
			std::cout << "parameter error: " << context.getValue() << std::endl;
		}
	} else {
		return;
	}
}
