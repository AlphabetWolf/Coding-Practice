#include <iostream>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target < matrix[0][0]){
            return false;
        }
        
        int i = 0;
        for(i = 0; i < matrix.size(); i++){
            if(matrix[i][0] > target){
                break;
            }
        }

        for(int j = 0; j < matrix[i-1].size(); j++){
            if(matrix[i-1][j] == target){
                return true;
            }
        }

        return false;
    }
};
