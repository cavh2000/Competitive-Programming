// https://leetcode.com/problems/number-of-islands/
class Solution {
public:
    
    int numIslands(vector<vector<char>>& grid) {
        int islands=0;
        int m=grid.size();
        int n=grid[0].size();
        //Iterate in all the matrix
        for(int i=0;i<m;i++){//For Y axis
            for(int j=0;j<n;j++){//For X axis
                if(grid[i][j]=='1'){
                    islands++;
                    bfs(i,j,grid);
                }
            }
        }
        return islands;
    }
    
    void bfs(int i,int j, vector<vector<char>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        
        vector<pair<int,int>> moves {{0,-1},{1,0},{0,1},{-1,0}};//Moves I can do (up, right, down and left)
        queue <vector<int>> q;
        
        q.push({i,j});//Push in queue the first node we found as 1 in the matrix (this is done only one time)
        grid[i][j]='0';
        
        while(!q.empty()){
            vector<int> neighborNode = q.front();//We move to the next neighbor node that is at the front of the queue
            //grid[neighborNode[0]][neighborNode[1]]='0';//We set that node to 0 (mark it as visited) (Don't do it here xd)
            
            for(int k=0;k<4;k++){//With this for we do the 4 possible movements to visit the 4 possible neighbors
                int y=neighborNode[0]+moves[k].second;//Movement of y
                int x=neighborNode[1]+moves[k].first;//Movement of x
                
                if(x>= 0 && x<n && y>=0 && y<m){//If 0<=x<n and 0<=y<m
                    if(grid[y][x]=='1'){
                        vector<int> aux{y,x};
                        q.push(aux);
                        grid[y][x]='0';//We set that node to 0 (mark it as visited)
                    }
                }
            }
            q.pop();
            
        }
    }
};
