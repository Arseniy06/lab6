#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> wordsMapCounter(const string& input) {
    map<string, int> wordCount;
    string word; 
    bool flag = false;
    for (char ch : input) {
        if (ch != ' ' && ch != ',' && ch != '.') {
            word += ch;
            flag = true;
        } 
        else {
            if (flag) {
                wordCount[word]++;
                word = ""; 
                flag = false; 
            }
        }
    }
    if (flag) {
        wordCount[word]++;
    }
    return wordCount;
}
