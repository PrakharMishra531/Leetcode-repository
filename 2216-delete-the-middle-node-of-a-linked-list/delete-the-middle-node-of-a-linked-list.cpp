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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        ListNode* temp = head;
        ListNode* prev = NULL;

        ListNode* temp2 = head;

        int cnt = 0;
        int n=0;
        
        while(temp2){
            temp2 = temp2->next;
            n++;
        }

        int mid = n/2;
        while(temp){
            if(cnt == mid){
                break;
            }
            prev = temp;
            temp = temp->next;
            ++cnt;
        }
        prev->next = temp->next;
        return head;
    }
};