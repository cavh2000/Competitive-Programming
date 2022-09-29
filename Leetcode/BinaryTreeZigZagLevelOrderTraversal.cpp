//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        
        vector<int> a;
        queue<TreeNode*> q;
        q.push(root);
        bool flag=true;
        TreeNode* node;
        int s;
        
        while(!q.empty()){
            s = q.size();
            for(int i=0;i<s;i++){
                node = q.front();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                a.push_back(node->val);
                q.pop();
            }
            
            if(flag)
                ans.push_back(a);
            else{
                reverse(a.begin(),a.end());
                ans.push_back(a);    
            }
                
            a.clear();
            flag=!flag;    
        }
        
        return ans;
    }
};
