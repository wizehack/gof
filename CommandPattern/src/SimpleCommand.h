/*
 * SimpleCommand.h
 *
 *  Created on: 2014. 5. 12.
 *      Author: hyunsangyoun
 */

#ifndef SIMPLECOMMAND_H_
#define SIMPLECOMMAND_H_

#include "Command.h"

template <class T> class SimpleCommand: public Command {
public:
	typedef void (T::*action)();
	SimpleCommand(T* object, action method):_object(object), _method(method){};
	virtual ~SimpleCommand(){};
	virtual void execute(){
		(_object->*_method)();
	};
private:
	T* _object;
	action _method;
};

#endif /* SIMPLECOMMAND_H_ */
