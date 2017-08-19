/*
 * Robot.h
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include <list>
#include <string>

typedef struct Location {
	unsigned int x;
	unsigned int y;
} position;

class Robot {
public:
	Robot();
	virtual ~Robot();
	position* goUp(unsigned int level);
	position* goDown (unsigned int level);
	position* goRight (unsigned int level);
	position* goLeft (unsigned int level);
	void setName(const std::string name);
	std::string getName();

private:
	std::string _name;
	position* currentPosition;
	bool power;
};

#endif /* ROBOT_H_ */
