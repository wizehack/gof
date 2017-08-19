/*
 * Originator.h
 *
 *  Created on: 2014. 5. 16.
 *      Author: hyunsangyoun
 */

#ifndef ORIGINATOR_H_
#define ORIGINATOR_H_

class Originator {
public:
	Originator();
	virtual ~Originator();
	void setState(int state);
	int getState();
private:
	int _state;
};

#endif /* ORIGINATOR_H_ */
