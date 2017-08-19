//============================================================================
// Name        : CommandPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Receiver.h"
#include "AnotherReceiver.h"
#include "Command.h"
#include "SimpleCommand.h"
#include "MacroCommand.h"

int main() {
	Receiver* receiver = new Receiver();
	SimpleCommand<Receiver>* sCmd1 = new SimpleCommand<Receiver>(receiver, &Receiver::action);
	sCmd1->execute();

	AnotherReceiver* another = new AnotherReceiver();
	SimpleCommand<AnotherReceiver>* sCmd2 = new SimpleCommand<AnotherReceiver>(another, &AnotherReceiver::func1);
	SimpleCommand<AnotherReceiver>* sCmd3 = new SimpleCommand<AnotherReceiver>(another, &AnotherReceiver::func2);
	SimpleCommand<AnotherReceiver>* sCmd4 = new SimpleCommand<AnotherReceiver>(another, &AnotherReceiver::func3);

	MacroCommand* mCommand = new MacroCommand();
	mCommand->add(sCmd1);
	mCommand->add(sCmd2);
	mCommand->add(sCmd3);
	mCommand->add(sCmd4);
	mCommand->execute();

	mCommand->remove(sCmd1);
	mCommand->execute();

	delete sCmd1;
	delete sCmd2;
	delete sCmd3;
	delete sCmd4;
	delete receiver;
	delete another;
	delete mCommand;

	return 0;
}
