/*
 * MoveExpression.h
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#ifndef MOVEEXPRESSION_H_
#define MOVEEXPRESSION_H_

#include "AbstractExpression.h"

class MoveExpression: public AbstractExpression {
public:
	MoveExpression();
	virtual ~MoveExpression();
	virtual void interpret(Context& context, Robot& robot);
};

#endif /* MOVEEXPRESSION_H_ */
