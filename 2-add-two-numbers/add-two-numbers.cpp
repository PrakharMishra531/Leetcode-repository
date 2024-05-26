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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = l1;
        ListNode* temp2 = l2;
        int cnt1=0,cnt2= 0;
        while(temp!=NULL || temp2 != NULL){
            if(temp!=NULL){
                cnt1++;
                temp = temp->next;
            }
            if(temp2!=NULL){
                cnt2++;
                temp2 = temp2->next;
            }
        }
        temp = (cnt1>=cnt2)?l1:l2;
        temp2 = (temp==l1)?l2:l1;
        int carry = 0;
        ListNode* last;
        while(temp!=NULL){
            temp->val = (temp->val + temp2->val + carry);
            
            carry = 0;
            if(temp->val >= 10){
                temp->val = temp->val % 10;
                carry = 1;
            }
            if(temp->next==NULL) last = temp;
            temp = temp->next;
            if(temp2->next == NULL)temp2->next = new ListNode(0);
            temp2 = temp2->next;
        }
        if(carry == 1){
            ListNode* newNode = new ListNode(1);
            last->next = newNode;
        }
        return (cnt1>=cnt2)?l1:l2;
    }
};