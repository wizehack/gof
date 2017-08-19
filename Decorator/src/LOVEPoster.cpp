/*
 * LOVEPoster.cpp
 *
 *  Created on: 2014. 4. 23.
 *      Author: hyunsangyoun
 */

#include "LOVEPoster.h"
#include <iostream>
namespace std {

LOVEPoster::LOVEPoster() {
	message = "사.랑.해.요.";
}

LOVEPoster::~LOVEPoster() {}

void LOVEPoster::display(){
	cout << message << endl;
}

} /* namespace std */
