#include <vector>
#include <string>
#include <iostream>
#include <set>
using namespace std;

vector<string> uniqueWords(const string& input){
    vector<string> output;
    set<string> uniques;
    string word;
    bool flag = false;
    for (char ch : input) {
        if (ch != ' ' && ch != ',' && ch != '.') {
            if (ch >= 'A' && ch <= 'Z') ch = ch + 'a' - 'A';
            word += ch;
            flag = true; 
        } 
        else {
            if (flag) {
                uniques.insert(word);
                word = ""; 
                flag = false; 
            }
        }
    }
    if (flag) uniques.insert(word);
    for (const auto& q : uniques) output.push_back(q);
    return output;
}
