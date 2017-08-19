//============================================================================
// Name        : CompositePattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Composite.h"
#include "Leaf.h"
#include "Component.h"

int main() {
	std::string f1 = "a";
	std::string f2 = "b";
	std::string f3 = "c";

	std::string fo1 = "fo1";
	std::string fo2 = "fo2";

	Composite* folder1 = new Composite(fo1);
	folder1->create(new Leaf(f1));
	folder1->create(new Leaf(f2));
	folder1->create(new Leaf(f3));
	folder1->create(new Composite(fo2));

	folder1->show();

	return 0;
}
