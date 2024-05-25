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
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int cntA=0;
        int cntB=0;
        while(tempA){
            cntA++;
            tempA=tempA->next;
        }
        while(tempB){
            cntB++;
            tempB=tempB->next;
        }
        int diff = abs(cntA-cntB);
        tempA = headA;
        tempB = headB;
        for(int i=0;i<diff;i++){
            if(cntA>cntB){
                tempA=tempA->next;
            }
            else{
                tempB=tempB->next;
            }
        }
        while(tempA!=NULL && tempB!=NULL){
            if(tempA==tempB)return tempA;
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }
};