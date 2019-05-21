//
// Created by Alexandre Lemos on 07/05/2019.
//

#ifndef PROJECT_TIMEUTIL_H
#define PROJECT_TIMEUTIL_H

const bool quiet = false; //Print info
const clock_t myTimeStart = clock();

double getTimeSpent() { return (double) (clock() - myTimeStart) / CLOCKS_PER_SEC; }

void printTime() { std::cout << getTimeSpent() << std::endl; }


#endif //PROJECT_TIMEUTIL_H
