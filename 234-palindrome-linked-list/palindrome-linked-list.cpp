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
        ListNode* back = head;
        vector<int>arr;
        while(back){
            arr.push_back(back->val);
            back=back->next;
        }
        int front = 0;
        int end = arr.size()-1;
        while(front<end){
            if(arr[front]!=arr[end]) return false;
            front++;
            end--;
        }
        return true;
    }
};