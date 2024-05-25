/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=tempB){
            tempA = tempA->next;
            tempB = tempB->next;
            if(tempA == tempB)return tempA;
            if(tempA == NULL)tempA = headA;
            if(tempB == NULL)tempB = headB;
        }
        return tempA;
    }
};