/*
 * TeamJangDecorator.h
 *
 *  Created on: 2014. 4. 23.
 *      Author: hyunsangyoun
 */

#ifndef TEAMJANGDECORATOR_H_
#define TEAMJANGDECORATOR_H_

#include "Decorator.h"
#include <string>
namespace std {

class TeamJangDecorator: public Decorator {
public:
	TeamJangDecorator(Poster*);
	virtual ~TeamJangDecorator();
	virtual void display();
private:
	void displayDecoMessage();
private:
	string decoMessage;
};

} /* namespace std */

#endif /* TEAMJANGDECORATOR_H_ */
