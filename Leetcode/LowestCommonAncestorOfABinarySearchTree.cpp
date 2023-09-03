//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root == p || root == q || 
           (root->val < p->val && root->val > q->val) || (root->val > p->val && root->val < q->val))
            return root;
        
        TreeNode* node;
        
        if(root->val < p->val && root->val < q->val)
            node = lowestCommonAncestor(root->right, p, q);
        if(root->val > p->val && root->val > q->val)
            node = lowestCommonAncestor(root->left, p, q);
        
        return node;
    }
};
