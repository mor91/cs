/* 
 * File:   BusyRoute.h
 * Author: chen
 *
 * Created on November 8, 2014, 11:43 AM
 */

#ifndef BUSYROUTE_H
#define	BUSYROUTE_H
#include <vector>
#include <string>

class BusyRoute {
public:
    BusyRoute(std::vector<std::string> juncs);
    //BusyRoute(const BusyRoute& orig);
    virtual ~BusyRoute();
    std::vector<std::string> getJunctions(){return junctions;}
private:
    std::vector<std::string> junctions;
};

#endif	/* BUSYROUTE_H */

