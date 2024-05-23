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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) return NULL;
        ListNode* temp = head;
        int len = 0;
        while(temp){
            len++;
            temp = temp->next;
        }
        int del = len - n + 1;
        if(del == 1){
            ListNode* newhead=head->next;
            return newhead;
        }
        ListNode* temp2 = head;
        ListNode* prev = NULL;
        int it=1;
        
        while(temp2){
            if(it == del) break;
            prev = temp2;
            temp2 = temp2->next;
            ++it;
        }
        prev->next = temp2->next;
        return head;
    }
};