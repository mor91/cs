/* 
 * File:   Road.cpp
 * Author: mor
 * 
 * Created on November 8, 2014, 11:54 AM
 */

#include "Road.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>


using namespace std;

Road::Road(vector<string> juncLength) {
    junctions.push_back(juncLength[0]);
    junctions.push_back(juncLength[1]);
    int result;
    stringstream(juncLength[2]) >> result;
    roadLength=result;
}


Road::~Road() {
    //junctions.clear();
    //int ~roadLength;
}

