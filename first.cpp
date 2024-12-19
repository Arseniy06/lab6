#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int elem) {
    for(; first < last; ++first) if (*first == elem) return first;
    return last; 
}
