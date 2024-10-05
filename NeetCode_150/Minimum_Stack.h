#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> s;
    stack<int> minStack;
    MinStack() { }
    
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            minStack.push(val);
        }else{
            s.push(val);
            if(val <= minStack.top()) {
                minStack.push(val);
            }else{
                minStack.push(minStack.top());
            }
        }
    }
    
    void pop() {
        s.pop();
        minStack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
