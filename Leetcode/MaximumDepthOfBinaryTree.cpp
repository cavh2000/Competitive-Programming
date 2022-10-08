//https://leetcode.com/problems/maximum-depth-of-binary-tree/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        int dephtLeft = maxDepth(root->left);
        int dephtRight = maxDepth(root->right);
        
        return 1 + max(dephtLeft, dephtRight);
    } 
};
