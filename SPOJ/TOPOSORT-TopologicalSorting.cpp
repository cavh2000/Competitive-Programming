//https://www.spoj.com/problems/TOPOSORT/
#include <bits/stdc++.h>
using namespace std;

vector<int> toposort(vector<vector<int>> &adj, int n, vector<int> &indegree){
    priority_queue <int, vector<int>, greater<int> > q;
    for(int i=0;i<n;i++){
        if(!indegree[i])
            q.push(i);
    }
    vector<int>topo;
    while(!q.empty()){
        int node = q.top();
        q.pop();
        topo.push_back(node);
        for(int i : adj[node]){
            indegree[i]--;
            if(!indegree[i])
                q.push(i);
        }
    }

    return topo;
}

int main() {
	int n, m, i, j;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int>indegree(n,0);
    while(m--){
        cin>>i>>j;
        adj[i-1].push_back(j-1);
        indegree[j-1]++;
    }

    vector<int> topo = toposort(adj, n, indegree);
	
    if(topo.size()==n){
        for(int i: topo)
            cout<<i+1<<" ";
    }else
        cout<<"Sandro fails.";

    cout<<endl;  
}
