/*
 * MoveExpression.cpp
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */
#include "Robot.h"

#include "MoveExpression.h"
#include <iostream>
#include <stdlib.h>

MoveExpression::MoveExpression() {}

MoveExpression::~MoveExpression() {}

void MoveExpression::interpret(Context& context, Robot& robot){
	int level = atoi(context.getValue().c_str());
	if(context.getTag() == "UP"){
		robot.goUp(level);
	} else if (context.getTag() == "DOWN") {
		robot.goDown(level);
	} else if (context.getTag() == "LEFT") {
		robot.goLeft(level);
	} else if (context.getTag() == "RIGHT") {
		robot.goRight(level);
	} else {
		return;
	}
}

