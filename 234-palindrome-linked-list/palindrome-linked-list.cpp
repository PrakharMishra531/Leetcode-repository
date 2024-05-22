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
        if (!head || !head->next)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow=slow->next;
        }
        ListNode* head2 = slow;
        ListNode* prev = NULL;
        ListNode* temp = head2;
        while(temp){
            ListNode* front = temp->next;
            temp->next=prev;
            prev = temp;
            temp = front;
        }
        ListNode* start = prev;
        ListNode* new1 = head;
        while(start){
            if(new1->val!=start->val)return false;
            new1=new1->next;
            start=start->next;
        }
        return true;
 
    }
};