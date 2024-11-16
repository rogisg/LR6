#include <iostream>
#include <list>

using namespace std;

void Sort(list<int>& nums) {
    nums.sort([](int a, int b) {
        return a > b; 
    });
}
