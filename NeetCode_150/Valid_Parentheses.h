#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 != 0){
            return false;
        }

        unordered_map <char, char> myMap;
        myMap[')'] = '(';
        myMap[']'] = '[';
        myMap['}'] = '{';

        stack <char> myStack;
        for (int i = 0; i < s.size(); i++) {
            if(myMap.find(s[i]) != myMap.end()){
                if(myStack.empty() || myStack.top() != myMap[s[i]]){
                    return false;
                }
                myStack.pop();
            } else {
                myStack.push(s[i]);
            }
        }

        if(myStack.empty()){
            return true;
        }

        return false;
    }
};
