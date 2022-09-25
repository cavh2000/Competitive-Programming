//https://leetcode.com/problems/kth-smallest-element-in-a-bst/
class Solution {
public:
    int ans=0, i=1;
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
         return ans;
    } 
    void inorder(TreeNode* root, int k) {
        if(! root)
            return;
        inorder(root->left,k);
        //cout<<i<<" " <<k<<endl;
        if(i==k){
        	ans=root->val;
            i++;
            return;
        } 
        i++;
        inorder(root->right, k) ;
    
    }
    
};
