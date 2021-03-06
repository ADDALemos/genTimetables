//
// Created by Alexandre Lemos on 10/08/2019.
//

#ifndef PROJECT_CURRICULUM_H
#define PROJECT_CURRICULUM_H


#include <set>
#include "Room.h"
#include "Class.h"
#include "ClusterbyRoom.h"
#include "ConstraintShort.h"

class Curriculum {
    int id;
    std::set<ClusterbyRoom*> pClass;



public:
    Curriculum(ClusterbyRoom *c,int i):id(i) {pClass.insert(c); }
    Curriculum(std::set<ClusterbyRoom*> pClass,int i):id(i),pClass(pClass) {}



    void addClass(ClusterbyRoom * c){
        pClass.insert(c);
    }


    bool operator==(const Curriculum &rhs) const {
        return id == rhs.id &&
               pClass == rhs.pClass;
    }

    bool operator!=(const Curriculum &rhs) const {
        return !(rhs == *this);
    }

     std::set<ClusterbyRoom*> getPClass()  {
        return pClass;
    }

    int getId() const {
        return id;
    }

};


#endif //PROJECT_CURRICULUM_H
