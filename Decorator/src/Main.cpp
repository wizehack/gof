//============================================================================
// Name        : Main.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Poster.h"
#include "LOVEPoster.h"
#include "TeamJangDecorator.h"
#include <iostream>

using namespace std;

int main() {
	Poster* lovePoster = new LOVEPoster();
	lovePoster->display();
	cout << endl;
	Poster* teamJangDecorator = new TeamJangDecorator(new LOVEPoster());
	teamJangDecorator->display();

	delete lovePoster;
	delete teamJangDecorator;
	return 0;
}
