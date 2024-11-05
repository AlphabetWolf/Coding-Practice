#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = gain[0];

        for(int i = 1; i < gain.size(); i++){
            gain[i] += gain[i - 1];
            if(gain[i] > highest){
                highest = gain[i];
            }
        }

        return highest > 0 ? highest : 0;
    }
};
