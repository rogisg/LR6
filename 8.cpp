#include <iostream>
#include <vector>

using namespace std;

void plusesDeleter(vector<int>& v) {
    auto it = v.begin();
    while (it != v.end()) {
        if (*it > 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
}
