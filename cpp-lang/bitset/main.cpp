#include <iostream>
#include <map>
#include <vector>
#include <deque>

#include "bitset_tests.h"

int main(int argc, char *argv[]) {
    std::map<int, std::string> myMap;

    int myValue;
    int* intPtr = &myValue;

    myMap.insert(make_pair(1, std::string("ali")));

    std::cout << myMap.size() << std::endl;
    std::cout << "Hello World!" << std::endl;

    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    bitset_tests test;
    test.doAddition();

    return 0;
}
