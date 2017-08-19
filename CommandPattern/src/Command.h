/*
 * Command.h
 *
 *  Created on: 2014. 5. 12.
 *      Author: hyunsangyoun
 */

#ifndef COMMAND_H_
#define COMMAND_H_

class Command {
public:
	Command();
	virtual ~Command();
	virtual void execute()=0;
};

#endif /* COMMAND_H_ */
