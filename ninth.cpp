#include <iostream>
#include <string>
#include <list>
using namespace std;

void Sort(list<int>& input) {
    inout.sort([](int x, int y) {
        return x > y;
    });
}
