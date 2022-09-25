//https://leetcode.com/problems/range-sum-of-bst/
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        queue <TreeNode*> q;
        q.push(root);
        TreeNode* node;
        while(!q.empty()){
            node=q.front();
            q.pop();
            
            if(node->val>=low && node->val<=high){
                sum+=node->val;
            }
            
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        return sum;
    }
};
