/* 
 * File:   BusyRoute.cpp
 * Author: mor
 * 
 * Created on November 8, 2014, 11:43 AM
 */

#include "../include/BusyRoute.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;



BusyRoute::BusyRoute(std::vector<std::string> juncs) {
    junctions = juncs;
}

BusyRoute::~BusyRoute() {
   // junctions.clear();
}

