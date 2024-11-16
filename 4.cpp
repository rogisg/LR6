#include <string>
#include <map>
#include <iostream>

using namespace std;

map<string, int> wordsMapCounter(const string& str) {
    map<string, int> wordCount;
    string wrd;

    for (size_t i = 0; i < str.size(); ++i) {
        int c = str[i];
        if (c != ' ' && c != ',' && c != '.') {
            wrd += c;
        } else {
            if (wrd.size() > 0) {
                wordCount[wrd]++;
                wrd = "";
            }
        }
    }

    if (wrd.size() > 0) {
        wordCount[wrd]++;
    }

    return wordCount;
}
