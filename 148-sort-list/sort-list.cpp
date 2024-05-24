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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        vector<int>st;
        ListNode* temp = head;
        while(temp){
            st.push_back(temp->val);
            temp=temp->next;
        }
        temp = head;
        int i = 0;
        sort(st.begin(),st.end());
        while(temp){
            temp->val = st[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};