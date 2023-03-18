//https://codeforces.com/problemset/problem/220/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n1, c,acum=0;;
    vector<int> n,nr;
    cin>>n1;
    while(n1--){
        cin>>c;
        n.push_back(c);
        nr.push_back(c);
    }
    
    sort(nr.begin(), nr.end());
    
    for(int i=0;i<n.size();i++){
        if(n[i]!=nr[i]){
            acum++;
        }
    }
    
    if(acum>2){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
   
}
