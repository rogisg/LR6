#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> uniqueWords(const string& str) {
    vector<string> v;
    string w;

    for (size_t i = 0; i < str.size(); ++i) {
        char c = str[i];
        if (c != ' ' && c != ',' && c != '.') {
            w += c;
        } else {
            if (w.size() > 0) {
                bool u = true;
                for (const auto& x : v) {
                    if (x == w) {
                        u = false;
                        break;
                    }
                }
                if (u) {
                    v.push_back(w);
                }
                w = "";
            }
        }
    }

    if (w.size() > 0) {
        bool u = true;
        for (const auto& x : v) {
            if (x == w) {
                u = false;
                break;
            }
        }
        if (u) {
            v.push_back(w);
        }
    }

    return v;
}
