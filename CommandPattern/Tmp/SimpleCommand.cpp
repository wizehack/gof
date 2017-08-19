/*
 * SimpleCommand.cpp
 *
 *  Created on: 2014. 5. 12.
 *      Author: hyunsangyoun
 */

#include "SimpleCommand.h"

template <class T>
SimpleCommand<T>::SimpleCommand(T* object, action method):_object(object), _method(method){};

template <class T>
SimpleCommand<T>::~SimpleCommand(){
	delete _object;
}

template <class T>
void SimpleCommand<T>::execute(){
	(_object->*_method)();
}
