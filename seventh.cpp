#include <iostream>
#include <list>
using namespace std;

void reverseNum(list<int>& input){
    list<int> result;
    for (auto i = input.begin(); i != input.end(); ++i){
        result.push_back(-(*i)); 
        result.push_back(*i);  ;
    }
    auto it = result.begin();
    while (it != result.end()) {
        cout << *it; 
        ++it;  
        if (it != result.end()) {
            cout << ", ";
        }
    }
}
