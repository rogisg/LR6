#include <vector>
#include <iostream>


using namespace std;


vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el) {
    auto f= first;
    auto l = last;

    while (f < l) {
        auto k =f + (l-f) /2;
        if (*k == el) {
            return k;
        } else if (*k < el) {
            f = k + 1;
        } else {
            l =k;
        }
    }

    return last;
}

