#include <iostream>
using namespace std;

class Solution {
public:
    string reformatNumber(string number) {
        string retS = "";
        for(int i = 0; i < number.size(); i++){
            if(number[i] == ' ' || number[i] == '-'){
                number.erase(i, 1);
                i--;
            }
        }
        if(number.length() < 4){
            return number;

        }else if(number.length() == 4){
            retS += number[number.size() - 4];
            retS += number[number.size() - 3];
            retS += '-';
            retS += number[number.size() - 2];
            retS += number[number.size() - 1];

        }else{
            int j = 0;
            if(number.size() % 3 == 1){
                j = 4;
            }

            for(int i = 0; i < number.size() - j; i++){
                if(i % 3 == 0 && i != 0){
                    retS += '-';
                }
                retS += number[i];
            }

            if(j == 4){
                retS += '-';
                retS += number[number.size() - 4];
                retS += number[number.size() - 3];
                retS += '-';
                retS += number[number.size() - 2];
                retS += number[number.size() - 1];
            }
        }
        return retS;
    }
};