#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, b, x;
	cin >> n; 
	vector<vector<int>> tree(n);
    vector<int> visit(n, 0);
    n--;
	while(n--){
		cin>>a>>b;
		tree[a-1].push_back(b-1);
		tree[b-1].push_back(a-1);
	}
	cin>>x;/*
    cout<<endl<<endl;

    for(int i=0;i<20;i++){
        cout<<i+1<<"-";
        for(int j : tree[i])
            cout<<j+1<<",";
        cout<<endl;

    }*/


	int level = 1;
	queue<int> q;
	q.push(0);
    visit[0]=1;
	while(!q.empty() && level!=x){
		int s = q.size();
		for(int i=0;i<s;i++){
			int curr = q.front();
			for(auto j : tree[curr]){
				if(visit[j]==0){
					visit[j]=1;
					q.push(j);
				}
			}
			q.pop();
		}
		level++;
        
	}

	cout<<q.size();
}
