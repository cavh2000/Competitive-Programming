//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2001
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
	int n, m, ind=1;
    string s, d;
    map<string,int> mp;
    map<int,string> ma;
    while(cin>>n){
        vector<vector<int>> adj(n);
        vector<int>indegree(n,0);

        for(int i=0;i<n;i++){
            cin>>s;
            mp[s]=i;
            ma[i]=s;
        }
        cin>>m;
        while(m--){
            cin>>s>>d;
            adj[mp[s]].push_back(mp[d]);
            indegree[mp[d]]++;
        }


        vector<int> topo = toposort(adj, n, indegree);
	
        if(topo.size()==n){
            cout<<"Case #"<<ind<<": Dilbert should drink beverages in this order:";
            for(int i: topo)
                cout<<" "<<ma[i];
        }
        cout<<".\n\n";  
        ind++;
    }

    return 0;
}
