#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (int i = 0; i < strs.size(); i++) {
            res += strs[i] + "#NT";
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        string temp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#' && s[i+1] == 'N' && s[i+2] == 'T') {
                res.push_back(temp);
                temp = "";
                i+=2;     
                
            } else {
                temp += s[i];
            }
        }
        return res;
    }
};
