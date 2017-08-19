/*
 * Facade.cpp
 *
 *  Created on: 2014. 4. 28.
 *      Author: hyunsangyoun
 */

#include "Facade.h"
#include "Calender.h"
#include "Airline.h"
#include "Hotel.h"

Facade::Facade() {}

Facade::~Facade() {}

bool Facade::reservEmergencyBusinessTrip(std::string place){
	bool reserved = false;
	const bool ASAP = true;
	Calender* calender = new Calender();
	if(calender->changeSchedule(place, ASAP)){

		Airline* airline = new Airline();
		if(airline->reserve(place)){

			Hotel *hotel = new Hotel();
			if(hotel->reserve(place)){
				reserved = true;
			}
		}
	}


	return reserved;
}
