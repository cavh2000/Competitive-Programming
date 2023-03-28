//https://codeforces.com/problemset/problem/263/A
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    string s;
    int n, ans;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>n;
            if(n==1)
                ans = abs(i-3) + abs(j-3);
        }
    }
    
    cout<<ans<<"\n";	
    return 0;
}
