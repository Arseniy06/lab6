#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

int wordsCounter(const string& input){
    int output = 1;
    for (int i = 0; i < input; ++i) {
        if ((input[i] == ' ') or (input[i] == ',') or (input[i] == '.')) {
            output +=1;
        }
    }
    return output;
}
