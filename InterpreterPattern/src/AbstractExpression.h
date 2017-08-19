/*
 * AbstractExpression.h
 *
 *  Created on: 2014. 5. 8.
 *      Author: hyunsangyoun
 */

#ifndef ABSTRACTEXPRESSION_H_
#define ABSTRACTEXPRESSION_H_

#include "Robot.h"
#include "Context.h"
#include <string>

class AbstractExpression {
public:
	AbstractExpression();
	virtual ~AbstractExpression();
	virtual void interpret(Context& context, Robot& robot)=0;
protected:
	const Robot* getRobot();
private:
	const Robot* _robot;
};

#endif /* ABSTRACTEXPRESSION_H_ */
