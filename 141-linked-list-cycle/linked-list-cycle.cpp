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
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        vector<ListNode*>arr;
        if(head!=NULL){
        while(temp->next!=NULL){
            arr.push_back(temp);
            temp=temp->next;
            auto it = find(arr.begin(),arr.end(),temp);
            if(it!=arr.end()){
                return true;
            }
        }
        }
        return false;
    }
};