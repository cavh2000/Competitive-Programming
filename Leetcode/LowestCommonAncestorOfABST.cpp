//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q)
            return root;
        
        TreeNode* l;
        TreeNode* r;
        l=lowestCommonAncestor(root->left, p, q);
        r=lowestCommonAncestor(root->right, p, q);
        
        if(!l)
            return r;
        if(!r)
            return l;
        
        return root;
    }
};
