// https://leetcode.com/problems/validate-binary-search-tree/
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
    bool isValidBST(TreeNode* root) {
        long long int max=LLONG_MAX;
        long long int min=LLONG_MIN;
        
        return isBST(root,min,max);
    }
    
    bool isBST(TreeNode *node,long long int min, long long int max){
        if(!node){
            return true;
        }
        if(node->val > min && node->val < max){
            return isBST(node->right,node->val,max) && isBST(node->left,min,node->val);
        }
        return false;
    }
};
