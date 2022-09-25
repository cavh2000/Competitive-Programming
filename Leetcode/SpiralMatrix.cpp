// https://leetcode.com/problems/spiral-matrix/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=0,top=0,left=0;
        int bottom=m-1;
        int right=n-1;
        
        vector<int> ans;
        //matrix[y][x]
        
        while(bottom>=top && left<=right){
            //Moving right (left->right)
            for(i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            //Moving down (top->bottom)
            for(i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            //Moving left (right->left)
            if(bottom>=top){//We need to make sure this condition is true during the cycle
                for(i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            //Moving up (bottom->top)
            if(left<=right){//We need to make sure this condition is true during the cycle
                for(i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            //this conditions are in the two for avobe so we don't need another if there
        }
        
        return ans;
    }
};
