//https://codeforces.com/problemset/problem/151/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, ml, l, r, g, x, y;
    cin>>n>>k>>ml>>l>>r>>g>>x>>y;
    
    int shots = (k*ml)/x;
    int rodajas = r*l;
    int salsa = g/y;
    
    int resp = min({shots, rodajas, salsa});

    cout<<resp/n;
    return 0;
}