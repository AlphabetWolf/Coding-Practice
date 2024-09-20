#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        if(map[original] == 0){
            return original;
        }else{
            while(map[original] != 0){
                original *= 2;
                if(map[original] == 0){
                    return original;
                }
            }
        }
        return original;
    }
};