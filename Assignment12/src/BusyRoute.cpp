/* 
 * File:   BusyRoute.cpp
 * Author: mor
 * 
 * Created on November 8, 2014, 11:43 AM
 */

#include "BusyRoute.h"
#include <cstdlib>
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

