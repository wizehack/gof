/*
 * Template.h
 *
 *  Created on: 2014. 4. 15.
 *      Author: hyunsangyoun
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

namespace std {

class Abstract {
public:
	Abstract();
	virtual ~Abstract();
	virtual void process1();
	virtual void process2();
	virtual void process3();
	void integrate();
};

} /* namespace std */

#endif /* TEMPLATE_H_ */
