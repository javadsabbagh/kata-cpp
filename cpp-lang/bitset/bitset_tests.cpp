
#include <iostream>
#include "bitset_tests.h"

void bitset_tests::doAddition() {
    int num = 0;
    std::cin >> num;
    std::bitset<4> a(num);
    std::cout << "C++ is good!" << a;
}
