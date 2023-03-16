//https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int i,n,j,sum=0,sum2=0;

    cin>>n;   
    vector<vector<int> > v;
    v.resize(n);
    
    for(i=0;i<n;i++)
    {
        v[i].resize(n);
        for (j=0; j<n;j++) 
        {
            cin>>v[i][j];
            if(j==i)
            {
                sum=sum+v[i][j];
            }
        }
