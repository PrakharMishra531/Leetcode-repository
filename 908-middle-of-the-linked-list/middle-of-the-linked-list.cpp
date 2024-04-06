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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int length=0;
        while(temp){
            length++;
            temp=temp->next;
        }
        int mid;
        if(length%2==0) mid = length/2 + 1;
        else mid = ceil(length/2.0) ;
        temp = head;
        int cnt=0;
        while(temp){
            cnt++;
            if(cnt==mid){
                return temp;
            }
            temp=temp->next;
        }
        return head;
    }
};