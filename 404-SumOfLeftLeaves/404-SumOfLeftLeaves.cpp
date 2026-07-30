// Last updated: 31/07/2026, 02:44:55
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
    int sumOfLeftLeaves(TreeNode* root) {
    if(!root){
        return 0;
    }

    int currentSum = 0;

    if(root->left && !root->left->left && !root->left->right){
        currentSum = root->left->val;
    }

    return currentSum 
         + sumOfLeftLeaves(root->left)
         + sumOfLeftLeaves(root->right);
}
};