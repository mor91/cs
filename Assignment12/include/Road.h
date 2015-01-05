/* 
 * File:   Roads.h
 * Author: chen
 *
 * Created on November 8, 2014, 11:54 AM
 */

#ifndef ROADS_H
#define	ROADS_H
#include <string>
#include <vector>

class Road {
public:
    Road(std::vector<std::string> juncLength);
    //Road(const Road& orig);
    virtual ~Road();
    std::string getJunction1(){return junctions[0];}
    std::string getJunction2(){return junctions[1];}
    int getRoadLength(){return roadLength;}
    double getStressFactor() const {
        return stressFactor;
    }

    void setStressFactor(double stressFactor) {
        this->stressFactor = stressFactor;
    }

private:
         std::vector<std::string> junctions;
         int roadLength;
         double stressFactor;
};

#endif	/* ROADS_H */

