/*
 * LifeExpressionTest.cpp
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#include <iostream>
#include <list>
#include "Context.h"
#include "AbstractExpression.h"
#include "LifeExpression.h"

using namespace std;

int main() {
	std::string sourceCode[2][2] = {
				{"YOUR_NAME_IS", "Mr.R"},
				{"BYE", "Mr.R"}
	};
	std::list<Context*> ast;

	Context* c1 = new Context();
	c1->setTag(sourceCode[0][0]);
	c1->setValue(sourceCode[0][1]);

	ast.push_back(c1);

	Context* c2 = new Context();
	c2->setTag(sourceCode[1][0]);
	c2->setValue(sourceCode[1][1]);

	ast.push_back(c2);

	AbstractExpression* lifeExpr = new LifeExpression();
	std::list<Context*>::iterator it = ast.begin();

	Robot* robot = new Robot();
	while(it != ast.end()) {
		lifeExpr->interpret(*(*it), *robot);
		it++;
	}
	delete robot;

	it = ast.begin();
	while(it != ast.end()) {
	    delete *it;
	    it++;
	}
	return 0;
}

