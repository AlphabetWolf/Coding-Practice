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

        
        if(nums.size() > 2){
            int j = 1;
            int temp = nums[nums.size() - 1];
            for(int i = nums.size() - 1; i >= 0; i--){
                if(temp != nums[i]){
                    j++;
                    if(j == 3){
                        return nums[i];
                    }
                    temp = nums[i];
                }
                
            }   

            return nums[nums.size()-1];
        }

        return nums[nums.size()-1];
    }
};