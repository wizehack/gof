/*
 * Prototype.h
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_

class Prototype {
public:
	Prototype();
	Prototype(const Prototype& selfObj);
	virtual ~Prototype();
	virtual Prototype* clone() const=0;

	int getState() const;
	void setState(int state);

private:
	int _state;
};

#endif /* PROTOTYPE_H_ */
