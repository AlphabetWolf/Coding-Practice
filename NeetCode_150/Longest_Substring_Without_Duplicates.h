#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    queue<char> myQueue;
    unordered_map<char, int> myMap;

    int lengthOfLongestSubstring(string s)
    {
        int maxLen = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (myMap[s[i]] == 0)
            {
                myMap[s[i]]++;
                myQueue.push(s[i]);
            }
            else
            {
                myQueue.push(s[i]);

                maxLen = max(maxLen, (int)myQueue.size()-1);
                myQueue.pop();
                myMap[s[i]] = 1;
            }
        }

        return max(maxLen, (int)myQueue.size());
    }
};
