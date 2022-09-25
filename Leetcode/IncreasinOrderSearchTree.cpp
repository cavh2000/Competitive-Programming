// https://leetcode.com/problems/increasing-order-search-tree/
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
    vector <TreeNode*> q;
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        
        for(int i=0;i<q.size()-1;i++){
            q[i]->left=nullptr;
            q[i]->right=q[i+1];
        }
        
        return q[0];
    }
    
    void inorder(TreeNode* node){
        if(!node)
            return;
        
        inorder(node->left);
        q.push_back(node);
        cout<<node->val;
        inorder(node->right);
    }
};

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
    TreeNode* aux = new TreeNode(0);
    TreeNode* first = aux;
    
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return first->right;
        
    }
    
    void inorder(TreeNode* node){
        if(!node){
            return;
        }
        
        inorder(node->left);
        aux->right=new TreeNode(node->val);
        aux->left=nullptr;
        aux=aux->right;
        inorder(node->right);
    }
};

