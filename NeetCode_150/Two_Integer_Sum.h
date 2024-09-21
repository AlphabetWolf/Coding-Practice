#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> helper(vector<int>& nums, int target, int i, int j, int length) {
        // Base case: If we've reached the end of the array without finding the pair
        if (i >= length) {
            return vector<int>(); // Return an empty vector if no pair is found
        }

        // If the pair is found
        if (nums[i] + nums[j] == target && i != j) {
            return vector<int>({i, j});
        }

        // If j exceeds the array bounds, increment i and reset j to i+1
        if (j >= length) {
            return helper(nums, target, i+1, i+2, length);
        }

        // Continue searching with incremented j
        return helper(nums, target, i, j+1, length);
    }

    
    vector<int> twoSum(vector<int>& nums, int target) {
        cout << nums.size();
        return helper(nums, target, 0, 1, nums.size());
    }
};