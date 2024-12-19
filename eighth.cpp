#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <set>
using namespace std;

void plusesDeleter(vector<int> input) {
    vector<int> vec;
    for (const auto& num : input){
        if (num <= 0) vec.push_back(num);
    }
    for (int i = 0; i < vec.size(); ++i){
        cout << vec[i];
        if (i < vec.size()-1) cout << ", ";
    }
}
