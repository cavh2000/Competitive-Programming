//https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int i,a,b,j,o;
    vector <int> v;
    vector <int> v2;
    cin>>a>>o;
    v.resize(a);
    v2.resize(a);

    for(i=0;i<a;i++)
    {
        cin>>v[i];
    }
    
    if(a>o)
    {
        b=o;
        j=0;
        for(i=b;i<a;i++)
        {
            v2[j]=v[i];
            j++;
        }
        
        for(i=0;i<b;i++)
        {
            v2[j]=v[i];
            j++;
        }
    }
    else
    {
        b=abs(a-o);
        
        for(i=b;i<a;i++)
        {
            v2[j]=v[i];
            j++;
        }
        
        for(i=0;i<b;i++)
        {
            v2[j]=v[i];
            j++;
        }
    }
    
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

    return 0;
}
