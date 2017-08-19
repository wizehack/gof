/*
 * MacroCommand.cpp
 *
 *  Created on: 2014. 5. 13.
 *      Author: hyunsangyoun
 */

#include "MacroCommand.h"

MacroCommand::MacroCommand():_cmds(new std::list<Command*>()) {}

MacroCommand::~MacroCommand() {}

void MacroCommand::add(Command* c){
	_cmds->push_back(c);
}

void MacroCommand::remove(Command* c){
	_cmds->remove(c);
}

void MacroCommand::execute() {
	std::list<Command*>::iterator p = _cmds->begin();
	while(p != _cmds->end()) {
	    (*p)->execute();
	    p++;
	  }
}
