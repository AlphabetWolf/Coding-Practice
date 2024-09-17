#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int calculate_distence(int x, int y, int x1, int y1){
        return abs(x - x1) + abs(y - y1);
    }
    
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int retNum = -1;

        int minDist = INT_MAX;

        for(int i = 0; i < points.size(); i++){
            if(points[i][0] == x || points[i][1] == y){
                int dist = calculate_distence(x, y, points[i][0], points[i][1]);
                if(dist < minDist){
                    minDist = dist;
                    retNum = i;
                }
            }
        }

        return retNum;
    }
};