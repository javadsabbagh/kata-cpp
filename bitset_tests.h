//
// Created by javad on 10/28/17.
//

#ifndef MAPS_BITSET_TESTS_H
#define MAPS_BITSET_TESTS_H

#include <bitset>
#include <iostream>
#include <atomic>

using namespace std;

class bitset_tests {

private:
    bitset<4> a;
    bitset<4> b;
    bitset<1> rem;
    bitset<5> res;

public:
    void doAddition();
};


#endif //MAPS_BITSET_TESTS_H
