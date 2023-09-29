#include <bits/stdc++.h>
using namespace std;

vector<int> ar[100001];
bool vis[100001];

void dfs(int node){
    vis[node] = 1;
    for(int hijo : ar[node]){
        if(!vis[hijo]) 
            dfs(hijo);
    }
}

int main() {
	int n, m, b, a;
	cin>>n>>m;
    vector<int> ans;
    while(m--){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            ans.push_back(i);
        }    
    }

    cout<<ans.size()-1<<endl;
    for(int i=1;i<ans.size();i++)
        cout<<ans[i-1]<<" "<<ans[i]<<endl;
}
