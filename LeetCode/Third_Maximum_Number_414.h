#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        auto first = nums.begin();
        auto last = nums.end();
        sort(first, last);
        return nums[2];
    }
};