#include <iostream>
#include <map>
#include "bitset_tests.h"
#include <vector>
#include <deque>

int main(int argc, char *argv[]) {
    map<int, string> myMap;

    int myValue;
    int* intPtr = &myValue;

    myMap.insert(make_pair(1, std::string("ali")));

    cout << myMap.size() << endl;
    cout << "Hello World!" << endl;

    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    bitset_tests test;
    test.doAddition();


    return 0;
}
