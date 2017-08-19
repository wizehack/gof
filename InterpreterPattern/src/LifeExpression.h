/*
 * LifeExpression.h
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#ifndef LIFEEXPRESSION_H_
#define LIFEEXPRESSION_H_

#include "AbstractExpression.h"

class LifeExpression: public AbstractExpression {
public:
	LifeExpression();
	virtual ~LifeExpression();
	virtual void interpret(Context& context, Robot& robot);
};

#endif /* LIFEEXPRESSION_H_ */
