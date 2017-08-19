//============================================================================
// Name        : FacadePattern.cpp
// Author      : wizehack
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Facade.h"

int main() {
	Facade* secretary = new Facade();
	bool reserved = secretary->reservEmergencyBusinessTrip("SVL");

	if(reserved == true){
		std::cout << "Reservation is completed. " << std::endl;
	} else {
		std::cout << "Reservation is failed. " << std::endl;
	}

	delete secretary;
	return 0;
}
