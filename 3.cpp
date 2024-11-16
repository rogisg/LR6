#include <string>
#include <iostream>

using namespace std;



int wordsCounter(const string& str){
    int s = 0;
    for (auto i = str.begin(); i < str.end(); i++){
        if ((*i == ' ') or (*i == ',') or (*i == '.')){
            s++;
    }
    }
    return s;
}
