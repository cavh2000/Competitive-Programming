#include<bits/stdc++.h>
using namespace std;

void bfs(int i, int j, vector<vector<char>> &rooms){
    int m = rooms.size();
    int n = rooms[0].size();
    vector<pair<int,int>> moves {{0,-1},{1,0},{0,1},{-1,0}};
    queue<pair<int,int>> q;
    q.push(make_pair(i,j));
    rooms[i][j]='#';

    while(!q.empty()){
        pair<int,int> p = q.front();
        for(int k=0;k<4;k++){
            int y = p.first + moves[k].second;
            int x = p.second + moves[k].first;
            if(x>=0 && x<n && y>=0 && y<m){
                if(rooms[y][x]=='.'){
                    q.push(make_pair(y,x));
                    rooms[y][x]='#';
                }
            }
        }
        q.pop();
    }
}

int main(){
    int n, m, ans=0;
    cin>>n>>m;
    vector<vector<char>> rooms(n, vector<char>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>rooms[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rooms[i][j]=='.'){
                ans++;
                bfs(i, j, rooms);
            }
        }
    }

    cout<<ans;
}
