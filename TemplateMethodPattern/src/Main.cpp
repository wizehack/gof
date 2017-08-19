/*
 * Main.cpp
 *
 *  Created on: 2014. 4. 15.
 *      Author: hyunsangyoun
 */

#include "Abstract.h"
using namespace std;

int main() {
	Abstract* abst = new Abstract();
	abst->integrate();
	delete abst;
	return 0;
}
