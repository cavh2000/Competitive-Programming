//https://leetcode.com/problems/count-good-nodes-in-binary-tree/
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
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
    
    int dfs(TreeNode *node,int maxValue){
        if(node==nullptr){
            return 0;
        }
        int gn=0;
        if(node->val >= maxValue){
            gn=1;
            maxValue=node->val;
        }else{
            gn=0;
        }
        gn+=dfs(node->left,maxValue);
        gn+=dfs(node->right,maxValue);
        
        return gn;  
    }
};
