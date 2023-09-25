#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<char>> &rooms, int &plus){
    int n = rooms.size();
    int m = rooms[0].size();
    vector<pair<int,int>> moves {{0,-1},{1,0},{0,1},{-1,0}};
    if(i<0 || i>=n || j<0 || j>=m)
        return;
    if(rooms[i][j]!='*')
        return;

    rooms[i][j]='#';
    if(j+1<m && j-1>=0 && i+1<n && i-1>=0){
        if(rooms[i][j-1]!='.' && rooms[i+1][j]!='.' && rooms[i][j+1]!='.' && rooms[i-1][j]!='.'){
            plus++;
            int y = i-1, x = j-1;
            while(y>=0){
                if(rooms[y][j+1]!='.' || rooms[y][j-1]!='.')
                    plus++;
                y--;
            }
            while(x>=0){
                if(rooms[i+1][x]!='.' || rooms[i-1][x]!='.')
                    plus++;
                x--;
            }
            x = j+1;
            y = i+1;
            while(y<n){
                if(rooms[y][j+1]!='.' || rooms[y][j-1]!='.')
                    plus++;
                y++;
            }
            while(x<m){
                if(rooms[i+1][x]!='.' || rooms[i-1][x]!='.')
                    plus++;
                x++;
            }
        }
    }
    
    
    for(int k=0;k<4;k++){
        dfs(i+moves[k].second, j+moves[k].first, rooms, plus);
    }
    

}

int main(){
    int n, m;
    int components = 0, plus = 0;
    cin>>n>>m;
    vector<vector<char>> rooms(n, vector<char>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>rooms[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rooms[i][j]=='*'){
                components++;
                dfs(i, j, rooms, plus);
            }
        }
    }

    if(components==1 && plus==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
        
}
