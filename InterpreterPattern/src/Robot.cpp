/*
 * Robot.cpp
 *
 *  Created on: 2014. 5. 9.
 *      Author: hyunsangyoun
 */

#include "Robot.h"
#include <stdlib.h>
#include <iostream>

Robot::Robot():currentPosition((position*)malloc(sizeof(position))), power(false) {
	currentPosition->x=0;
	currentPosition->y=0;
}

Robot::~Robot() {
	free(currentPosition);
}

void Robot::setName(std::string name){
	_name = name;
	std::cout << "Yes master, my name is " << _name << std::endl;
}

std::string Robot::getName(){
	return _name;
}

position* Robot::goUp(unsigned int level){
	currentPosition->y = currentPosition->y + level;
	std::cout << "My position is ("  << currentPosition->x << ", " << currentPosition->y << ") " << std::endl;
	return currentPosition;
}

position* Robot::goDown(unsigned int level){
	if(currentPosition->y >= level){
		currentPosition->y = currentPosition->y - level;
	} else {
		currentPosition->y = 0;
	}
	std::cout << "My position is (" << currentPosition->x << ", " << currentPosition->y << ") " << std::endl;
	return currentPosition;
}

position* Robot::goRight(unsigned int level){
	currentPosition->x = currentPosition->x + level;
	std::cout << "My position is ("  << currentPosition->x << ", " << currentPosition->y << ") " << std::endl;
	return currentPosition;
}

position* Robot::goLeft(unsigned int level){
	if(currentPosition->x >= level){
		currentPosition->x = currentPosition->x - level;
	} else {
		currentPosition->x = 0;
	}
	std::cout << "My position is ("  << currentPosition->x << ", " << currentPosition->y << ") " << std::endl;
	return currentPosition;
}

