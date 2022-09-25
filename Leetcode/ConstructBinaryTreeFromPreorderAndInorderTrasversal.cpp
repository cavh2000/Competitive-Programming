//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root;
        return root=makeTree(preorder,inorder);
    }
    
    TreeNode* makeTree(vector<int>& preorder, vector<int>& inorder){
        if(preorder.size()==0 || inorder.size()==0){
            return nullptr;
        }
        
        TreeNode* node = new TreeNode(preorder[0]);
        vector<int> inLeft, inRight;
        vector<int> preLeft, preRight;
        int j=0;
        
        for(int i=0;i<inorder.size();i++){
            if(preorder[0]==inorder[i]){
                break;
            }
            inLeft.push_back(inorder[i]);
        }
        
        for(int i=inLeft.size()+1;i<inorder.size();i++){
            inRight.push_back(inorder[i]);
        }
        
        for(int i=1;i<preorder.size();i++){
            if(i<=inLeft.size()){
                preLeft.push_back(preorder[i]);
            }else{
                preRight.push_back(preorder[i]);
            }
        }
        
        node->left=makeTree(preLeft,inLeft);
        node->right=makeTree(preRight,inRight);
                             
        return node;
    }
};
