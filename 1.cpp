#include <vector>
#include <iostream>

using namespace std;

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el) {
    for (std::vector<int>::iterator it = first; it < last; ++it) {
        if (*it == el) {
            return it;
        }
    }
    return last;
}
