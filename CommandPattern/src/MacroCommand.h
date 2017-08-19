/*
 * MacroCommand.h
 *
 *  Created on: 2014. 5. 13.
 *      Author: hyunsangyoun
 */

#ifndef MACROCOMMAND_H_
#define MACROCOMMAND_H_
#include "Command.h"
#include <list>
class MacroCommand : public Command{
public:
	MacroCommand();
	virtual ~MacroCommand();
	virtual void add(Command* c);
	virtual void remove(Command* c);

	virtual void execute();
private:
	std::list<Command*>*_cmds;
};

#endif /* MACROCOMMAND_H_ */
