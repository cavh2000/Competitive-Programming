//https://codeforces.com/contest/230/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector<pair<int, int>> dragons;
    int s, n, d1, d2;
    cin>>s>>n;
    while(n--){
        cin>>d1>>d2;
        dragons.push_back(make_pair(d1, d2));
    }
    sort(dragons.begin(), dragons.end());
    
    for(int i=0;i<dragons.size();i++){
        if(s>dragons[i].first)
           s+=dragons[i].second;
        else{
            cout<<"NO";
            exit(0);
        }
    }
    
    cout<<"YES";
 
    return 0;
}
