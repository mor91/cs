/* 
 * File:   Car.cpp
 * Author: chen
 * 
 * Created on November 15, 2014, 2:27 PM
 */

#include "Car.h"

Car::Car(const std::string &carID,const std::string &roadPlan){
    _carID=carID;
    _roadPlan=roadPlan;
    _goodCondition=true;
    _distanceFromBeginningJunction=0;
}

Car::~Car() {//check that everything is deleted
}

