class Solution {
public:
    void flatten(TreeNode* root) {
        dfs(root);
    }
    
    TreeNode* dfs(TreeNode* root){
        if(!root)
            return nullptr;
        
        TreeNode* left = dfs(root->left);
        TreeNode* right = dfs(root->right);
        
        TreeNode* tail;
        
        if(right)
            tail = right;
        
        if(left){
            left->right = root->right;
            root->right = root->left;
            root->left = nullptr;
                
            if(!tail)
                tail = left;
        }
        
        if(tail)
            return tail;
        
        return root;
            
    }
};
