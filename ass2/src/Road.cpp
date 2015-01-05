/* 
 * File:   Road.cpp
 * Author: chen
 * 
 * Created on November 15, 2014, 2:34 PM
 */

#include "Road.h"

Road::Road() {
}

Road::Road(const std::string &startingJunction, const std::string &endJunction, int length) {
    _startingJunction=startingJunction;
    _endJunction=endJunction;
    _length=length;
    _baseSpeed=0;
    _noOfCars=0;
}

Road::~Road() {
}

