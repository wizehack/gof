/*
 * Concrete1.h
 *
 *  Created on: 2014. 4. 15.
 *      Author: hyunsangyoun
 */

#ifndef CONCRETE1_H_
#define CONCRETE1_H_

#include "Abstract.h"
namespace std {

class Concrete : public Abstract{
public:
	Concrete();
	virtual ~Concrete();
	void process1();
	void process2();
	void process3();
};

} /* namespace std */

#endif /* CONCRETE1_H_ */
