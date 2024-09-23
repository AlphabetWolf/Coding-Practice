#include <iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* ori_tracker = head;

        if(ori_tracker == nullptr){
            return head;
        }

        ListNode* new_tail = new ListNode(ori_tracker->val);
        new_tail->next = NULL;
        ListNode* new_tracker = new_tail;

        ListNode* ori_tracker_next = head->next;
        while(ori_tracker_next != NULL){
            delete ori_tracker;
            ori_tracker = ori_tracker_next;
            ori_tracker_next = ori_tracker_next->next;

            ListNode* newNode = new ListNode(ori_tracker->val);
            newNode->next = new_tracker;
            new_tracker = newNode;
        }
        
        return new_tracker;
    }
};
