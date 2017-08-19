//============================================================================
// Name        : ProxyPattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Subject.h"
#include "Proxy.h"

#include <iostream>

using namespace std;

int main() {
	Subject* subject = new Proxy();
	int s = subject->simpleRequest();
	int r = subject->request(1, 1);

	std::cout << s << std::endl;
	std::cout << r << std::endl;

	delete subject;
	return 0;
}
