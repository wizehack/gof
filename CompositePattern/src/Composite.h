/*
 * Composite.h
 *
 *  Created on: 2014. 4. 25.
 *      Author: hyunsangyoun
 */

#ifndef COMPOSITE_H_
#define COMPOSITE_H_

#include "Component.h"
#include <vector>
class Composite: public Component {
public:
	explicit Composite(const std::string name);
	virtual ~Composite();
	void create(Component* component);
	void remove(Component* component);
	void show();
private:
	const std::string _name;
	std::vector<Component*> _vlist;
};

#endif /* COMPOSITE_H_ */
