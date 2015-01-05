/* 
 * File:   AddCarEvent.cpp
 * Author: mor
 * 
 * Created on November 15, 2014, 1:27 PM
 */

#include "../include/AddCarEvent.h"
#include "../include/Event.h"
#include <iostream>


AddCarEvent::AddCarEvent() {
}

AddCarEvent::AddCarEvent(int time,std::string &carID,std::string &roadPlan) {
    _time=time;
    _carID=carID;
    _roadPlan=roadPlan;
}

AddCarEvent::~AddCarEvent() {
}

void AddCarEvent::performEvent(){

    //Car *car=new Car(carID,roadPlan);
    
}

