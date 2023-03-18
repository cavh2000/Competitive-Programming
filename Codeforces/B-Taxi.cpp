//https://codeforces.com/contest/158/problem/B
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, g, taxis=0;
    int cuatros=0, tres=0, dos=0, unos=0;
    cin>>n;
    
    while(n--){
        cin>>g;
        if(g==4)
            cuatros++;
        else if(g==3)
            tres++;
        else if(g==2)
            dos++;
        else if(g==1)
            unos++;
    }
    
    
    taxis+=cuatros;
    
    
    int minimo= min(tres,unos);
    taxis+=minimo;
    tres-=minimo;
    unos-=minimo;
 
    
    if(tres)
        taxis+=tres;
    
    int d=unos/2;
    unos-=d*2;
    dos+=d;
 
    int pares=dos/2;
    taxis+=pares;
    dos-=pares*2;
 
    
    if(unos || dos)
        taxis++;
    
 
    cout<<taxis;
 
    return 0;
}