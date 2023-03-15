//https://codeforces.com/contest/149/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int BT(vector <int> v, int c, int k)
{
	if(k<=0)
        {
		return 0;
	}
 
        for(int i =0;i<12;i++)
	{
		k-=v[i];
		if(k<=0)
		{
			return i+1;
		}
 
	}
         	return -1;
}
 
int main()
{
        vector <int> v(12);
        int k,c=0;
        cin>>k;
        for(int i=0;i<12;i++)
	{
                cin>>v[i];
        }
        sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	cout<<BT(v, c, k);
        return 0;
}