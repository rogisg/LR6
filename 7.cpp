#include <iostream>
#include <list>

using namespace std;

void reverseNum(list<int>& nums) {
    list<int> res;
    
    for (const auto& num : nums) {
        res.push_back(-num);
        res.push_back(num);
    }

    nums = res;
}
