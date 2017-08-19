//============================================================================
// Name        : BridgePattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Bartender.h"
#include "Alba.h"

using namespace std;

int main() {
	Bartender* bartender = new Alba();
	bartender->serveCocktail("Gin tonic");
	bartender->talk();
	delete bartender;
	return 0;
}
