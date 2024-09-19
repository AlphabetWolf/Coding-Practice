#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> retVec;
        auto first = nums.begin();
        auto last = nums.end();
        sort(first, last);
        int i = nums.size();
        while(i >= 2){
            retVec.push_back(nums[1]);
            retVec.push_back(nums[0]);
            nums.erase(nums.begin(), nums.begin()+1);
            nums.erase(nums.begin(), nums.begin()+1);
            i-=2;
        }
        return retVec;
    }
};