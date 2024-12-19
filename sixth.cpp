#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int diffWordsCounter(const string& input) {
    set<string> uniques;
    string word;
    bool flag = false;
    for (char ch : input) {
        if (ch != ' ' && ch != ',' && ch != '.') {
            if (ch >= 'A' && ch <= 'Z') ch = ch + 'a' - 'A';
            word += ch;
            flag = true;
        } else {
            uniques.insert(word);
            word = "";
            flag = false;
        }
    }
    if (flag) uniques.insert(word);
    return uniques.size();
}
