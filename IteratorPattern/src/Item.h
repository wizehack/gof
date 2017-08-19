/*
 * Item.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>
class Item {
public:
	Item();
	virtual ~Item();
	void setName(std::string name);
	std::string getName();
private:
	std::string _name;
};

#endif /* ITEM_H_ */
