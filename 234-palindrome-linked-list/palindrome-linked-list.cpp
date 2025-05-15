/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    stack<int>s;
    ListNode* curr=head;
    while(curr){
        s.push(curr->val);
        curr=curr->next;
    }
    ListNode* temp=head;
    while(temp){
        if(temp->val!=s.top()){
        return false;
        }
        else{
            temp=temp->next;
            s.pop();
        }
    }
    return true;    
    }
};