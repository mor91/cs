/* 
 * File:   ini.h
 * Author: chen
 *
 * Created on November 17, 2014, 9:55 AM
 */
#ifndef INI_H_
#define INI_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class IniClass{
private:
    
public:
    IniClass();
    virtual ~IniClass();
    void read1() const;
    void read2() const;
};
 
#endif /* INI_H_ */