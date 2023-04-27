//https://codeforces.com/problemset/problem/519/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, i;
    cin>>n;
    vector<int> abc;
    for(i=0;i<n;i++){
        cin>>x;
        abc.push_back(x);
    }
    
    for(i=0;i<n-1;i++){
        cin>>x;
        abc.push_back(x);
    }
    
    for(i=0;i<n-2;i++){
        cin>>x;
        abc.push_back(x);
    }
    
    x=0;
    
    for(i=0;i<(2*n)-1;i++)
        x ^= abc[i];
    
    cout<<x<<endl;
    x=0;
    for(i=n;i<abc.size();i++)
        x ^= abc[i];
    
    cout<<x<<endl;
}
