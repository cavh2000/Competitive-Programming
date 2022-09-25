// https://leetcode.com/problems/recover-binary-search-tree/
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
    vector <TreeNode*> nodes;
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        int n1,n2;
        for(int i=0;i<nodes.size()-1;i++){
            if(nodes[i]->val > nodes[i+1]->val){
                n1=i;
                break;
            }
        }
        
        for(int i=nodes.size()-1;i>0;i--){
            if(nodes[i]->val < nodes[i-1]->val){
                n2=i;
                break;
            }
        }
        
        swap(nodes[n1]->val,nodes[n2]->val);
    }
    
    void inorder(TreeNode* node){
        if(!node){
            return;
        }
        
        inorder(node->left);
        nodes.push_back(node);
        inorder(node->right);
        
    }
};
