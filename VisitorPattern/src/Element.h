/*
 * Element.h
 *
 *  Created on: 2014. 5. 19.
 *      Author: hyunsangyoun
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

class Visitor;
class Element {
public:
	Element();
	virtual ~Element();
	virtual void accept(Visitor &v) = 0;
};

#endif /* ELEMENT_H_ */
