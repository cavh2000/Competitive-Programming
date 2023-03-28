//https://codeforces.com/problemset/problem/450/A
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int m, n, x, i=1, max=0, ans=1;
    cin>>m>>n;
    
    while(m--){
        cin>>x;
        x=(x+n-1)/n;
        if(max<=x){
            max=x;
            ans=i;
        }
        i++;
    }
 
    cout<<ans;
    return 0;
}
