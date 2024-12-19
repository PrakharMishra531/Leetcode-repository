/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        return 1 + max(lh,rh);
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL)return true;
        int leftST = height(root->left);
        int rightST = height(root->right);
        if(abs(leftST-rightST)<=1 && isBalanced(root->right) && isBalanced(root->left))return true;
        return false;
    }
};