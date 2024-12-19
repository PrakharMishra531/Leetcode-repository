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
    int diameter = 0;
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        diameter = max(lh + rh, diameter);
        return 1 + max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        // if(root == NULL)return 0;
        // int l = height(root->left) ;
        // int r = height(root->right);
        // int ans = 0;
        // ans = max(l+r,ans);
        // diameterOfBinaryTree(root->left);
        // diameterOfBinaryTree(root->right);
        // return ans;
        height(root);
        return diameter;
    }
};