#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        if(nums.size() == 1){
            return nums[0];
        }

        double sum = 0;

        if(nums.size() == k){
            auto it = nums.begin();
            for(it; it != nums.end(); it++){
                sum+=*it;
            }
            return sum/k;
        }

        for(int i = nums.size() - 1; i >= nums.size() - k; i--){
            sum += nums[i];
        }

        double max = sum/k;

        for(int i = nums.size() - k - 1; i >= 0; i--){
            sum = sum - nums[i + k] + nums[i];
            if(sum/k > max){
                max = sum/k;
            }
        }
        
        return max;
    }
};