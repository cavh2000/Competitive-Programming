//https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> positions;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    positions.push_back(make_pair(i,j));
                }
            }
        }
        
        for(int k=0;k<positions.size();k++){
            for(int i=0;i<matrix.size();i++){
                matrix[i][positions[k].second]=0;
            }
            for(int j=0;j<matrix[0].size();j++){
                matrix[positions[k].first][j]=0;
            }   
        }
        
    }
};
