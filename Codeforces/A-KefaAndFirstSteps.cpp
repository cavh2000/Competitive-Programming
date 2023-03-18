//https://codeforces.com/problemset/problem/580/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, d1=1, acum=0, max=1;
    cin>>n;
    
    while(n--){
        cin>>d;
        if(d>=d1){
            acum++;
        }else{
            if(max<acum){
                max = acum;
            }
            acum =1;
        }
        d1=d;
    }
    
    if(max<acum){
        max = acum;
    }
    
    cout<<max;
    return 0;
}