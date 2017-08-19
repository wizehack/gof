/*
 * Leaf.h
 *
 *  Created on: 2014. 4. 25.
 *      Author: hyunsangyoun
 */

#ifndef LEAF_H_
#define LEAF_H_

#include "Component.h"
#include <iostream>
class Leaf: public Component {
public:
	Leaf(const std::string name);
	virtual ~Leaf();
	void show();
private:
	const std::string _name;
};

#endif /* LEAF_H_ */
