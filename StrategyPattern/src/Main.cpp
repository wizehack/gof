/*
 * Main.cpp
 *
 *  Created on: 2014. 4. 14.
 *      Author: hyunsangyoun
 */
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

using namespace std;
int main(){
	Context* context = new Context(new ConcreteStrategyA());
	context->contextInterface();
	delete context;

	context = new Context(new ConcreteStrategyB());
	context->contextInterface();
	delete context;

	return 0;
}


