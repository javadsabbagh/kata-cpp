
#ifndef MAPS_BITSET_TESTS_H
#define MAPS_BITSET_TESTS_H

#include <bitset>
#include <atomic>

class bitset_tests {

private:
    std::bitset<4> a;
    std::bitset<4> b;
    std::bitset<1> rem;
    std::bitset<5> res;

public:
    void doAddition();
};


#endif //MAPS_BITSET_TESTS_H
