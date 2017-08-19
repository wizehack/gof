/*
 * Context.h
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <string>
class Context {
public:
	Context();
	virtual ~Context();
	void setTag(std::string& tag);
	void setValue(std::string& value);
	std::string& getTag();
	std::string& getValue();

private:
	std::string _tag;
	std::string _value;
};

#endif /* CONTEXT_H_ */
