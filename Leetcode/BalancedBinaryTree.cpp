//https://leetcode.com/problems/balanced-binary-tree/
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        
        pair<bool,int> leftMaxHeight = dfs(root->left);
        pair<bool,int> rightMaxHeight = dfs(root->right);
        
        return (leftMaxHeight.first && rightMaxHeight.first && abs(rightMaxHeight.second - leftMaxHeight.second)<=1) ? true : false;
        
    }
    
    pair<bool,int> dfs(TreeNode* root){
        if(!root)
            return {true,0};
        
        pair<bool,int> leftHeight = dfs(root->left);
        pair<bool,int> rightHeight = dfs(root->right);
        
        pair<bool,int> ans;
        
        ans.first = (leftHeight.first && rightHeight.first && abs(rightHeight.second - leftHeight.second)<=1) ? true : false;
        ans.second = 1 + max(rightHeight.second,leftHeight.second);
        
        return ans;
    }
};
