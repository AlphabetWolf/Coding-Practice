#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class KthLargest {
    priority_queue<int> myQ;
    int kth;
public:
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for (int i = 0; i < nums.size(); i++) {
            myQ.push(nums[i]);
        }
    }
    
    int add(int val) {
        myQ.push(val);
        vector<int> temp;
        for (int i = 0; i < kth - 1; i++) {
            temp.push_back(myQ.top());
            myQ.pop();
        }
        int result = myQ.top();
        for (int i = 0; i < temp.size(); i++) {
            myQ.push(temp[i]);
        }
        return result;
    }
};
