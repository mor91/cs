/* 
 * File:   main.cpp
 * Author: chen
 *
 * Created on November 15, 2014, 11:42 AM
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;
void save(const std::string &filename)
{
   using boost::property_tree::ptree;

   ptree pt;
   pt.put("a.value", 3.14f);
   pt.put("a.value", 2.72f);
   pt.add("a.bvalue", 3.14f);

   write_ini( filename, pt );
}


int main(int argc, char** argv) {
    string line;
    ifstream Configuration;
    Configuration.open("Configuration.ini");
    while(!Configuration.eof()){
        line.clear();
        getline(Configuration,line);
        
    }    
    

    return 0;
}

