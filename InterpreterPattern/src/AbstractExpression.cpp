/*
 * AbstractExpression.cpp
 *
 *  Created on: 2014. 5. 8.
 *      Author: hyunsangyoun
 */

#include "AbstractExpression.h"
#include <iostream>
AbstractExpression::AbstractExpression():_robot(0) {}

AbstractExpression::~AbstractExpression() {}

const Robot* AbstractExpression::getRobot(){

	return _robot;
}
