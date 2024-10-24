#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int total_len = word1.length() + word2.length();
        string result;
        int pos_1 = 0;
        int pos_2 = 0;

        for(int i = 0; i < total_len; i++) {
            if(i % 2 == 0){
                if(pos_1 < word1.length()){
                    result += word1[pos_1];
                    pos_1++;
                }
                else{
                    result += word2[pos_2];
                    pos_2++;
                }
            }else{
                if(pos_2 < word2.length()){
                    result += word2[pos_2];
                    pos_2++;
                }
                else{
                    result += word1[pos_1];
                    pos_1++;
                }
            }
        }
        return result;
    }
};