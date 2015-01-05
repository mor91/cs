/* 
 * File:   RoadReport.h
 * Author: chen
 *
 * Created on November 15, 2014, 1:32 PM
 */

#ifndef ROADREPORT_H
#define	ROADREPORT_H

#include "Report.h"


class RoadReport:public Report {
    std::string _startJunction;
    std::string _endJunction;
    std::string _cars;
public:
    RoadReport();
    RoadReport(const std::string &startJunction, const std::string &endJunction, const std::string &cars);
    virtual ~RoadReport();
private:

};

#endif	/* ROADREPORT_H */

