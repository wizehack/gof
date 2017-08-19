//============================================================================
// Name        : InterpreterPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Robot.h"
#include "Context.h"
#include "AbstractExpression.h"
#include "LifeExpression.h"
#include "MoveExpression.h"

#include <iostream>
#include <list>

std::list<Context*> createSourceCode(std::string sourceCode[6][2]);

int main() {
	/*
	 * YOUR_NAME_IS Mr.R
	 * UP 3
	 * LEFT 4
	 * RIGHT 2
	 * DOWN 2
	 * BYE MR.R
	 */
	// 위 스크립트가 아래와 같이 파싱되어 구조화 되었다고 가정한다.
	std::string sourceCode[6][2] = {
			{"YOUR_NAME_IS", "Mr.R"},
			{"UP", "3"},
			{"LEFT", "4"},
			{"RIGHT", "2"},
			{"DOWN", "2"},
			{"BYE", "Mr.R"}
	};
	std::list<Context*> codeList = createSourceCode(sourceCode);
	std::list<Context*>::iterator it = codeList.begin();

	//스크립트 인터프리터 생성
	AbstractExpression* lifeExpr = new LifeExpression();
	AbstractExpression* moveExpr = new MoveExpression();

	Robot* robot = new Robot();
	int i=0;
	while(it != codeList.end()) {
		if(i == 0 || i == 5){
			lifeExpr->interpret(*(*it), *robot);
		} else {
			moveExpr->interpret(*(*it), *robot);
		}
		it++;
		i++;
	}

	delete robot;
	delete lifeExpr;
	delete moveExpr;

	it = codeList.begin();
	while(it != codeList.end()) {
	    delete *it;
	    it++;
	}

	return 0;
}

std::list<Context*> createSourceCode(std::string sourceCode[6][2]) {
	std::list<Context*> ast;

	Context* c1 = new Context();
	c1->setTag(sourceCode[0][0]);
	c1->setValue(sourceCode[0][1]);
	ast.push_back(c1);

	Context* c2 = new Context();
	c2->setTag(sourceCode[1][0]);
	c2->setValue(sourceCode[1][1]);
	ast.push_back(c2);

	Context* c3 = new Context();
	c3->setTag(sourceCode[2][0]);
	c3->setValue(sourceCode[2][1]);
	ast.push_back(c3);

	Context* c4 = new Context();
	c4->setTag(sourceCode[3][0]);
	c4->setValue(sourceCode[3][1]);
	ast.push_back(c4);

	Context* c5 = new Context();
	c5->setTag(sourceCode[4][0]);
	c5->setValue(sourceCode[4][1]);
	ast.push_back(c5);

	Context* c6 = new Context();
	c6->setTag(sourceCode[5][0]);
	c6->setValue(sourceCode[5][1]);
	ast.push_back(c6);

	return ast;
}
