#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int L_ptr = 0, R_ptr = 1, max_profit = 0;
        while (R_ptr < prices.size()) {
            if (prices[R_ptr] > prices[L_ptr]) {
                max_profit = max(max_profit, prices[R_ptr] - prices[L_ptr]);
            } else {
                L_ptr = R_ptr;
            }
            R_ptr++;
        }
        return max_profit;
    }
};
