//https://leetcode.com/problems/binary-tree-level-order-traversal/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        
        TreeNode* node;
        int s;
        vector<int> a;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            s=q.size();
            for(int i=0;i<s;i++){
                node = q.front();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                a.push_back(node->val);
                q.pop();
            }
            ans.push_back(a);
            a.clear();
        }
        
        return ans;
    }
};
