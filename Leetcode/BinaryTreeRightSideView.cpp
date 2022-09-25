// https://leetcode.com/problems/binary-tree-right-side-view/
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        queue <TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            ans.push_back(q.front()->val);
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode *current=q.front();
                if(current->right){
                    q.push(current->right);
                }
                if(current->left){
                    q.push(current->left);
                }
                
                q.pop();
            }
            
        }
        return ans;
    }
    
};
