/*
 * Component.h
 *
 *  Created on: 2014. 4. 25.
 *      Author: hyunsangyoun
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_
#include <string>
class Component {
public:
	Component(const std::string name);
	virtual ~Component();
	virtual void show()=0;
	std::string getName();
private:
	const std::string _name;
};

#endif /* COMPONENT_H_ */
