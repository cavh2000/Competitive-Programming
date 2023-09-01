//https://leetcode.com/problems/invert-binary-tree/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return root;
        
        dfs(root);
        
        return root;
    }
    
    void dfs(TreeNode* node){
        if(!node)
            return;
        
        TreeNode* n = node->left;
        node->left = node->right;
        node->right = n;
        
        dfs(node->left);
        dfs(node->right);
    }
};
