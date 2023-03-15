//https://codeforces.com/contest/1200/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
	vector <int> v;
	v.assign(10,0);
	string c;
	int n,p;
	cin>>n;
	cin>>c;
	for(int i=0;i<n;i++)
	{
		if(c[i]=='R')
		{
			for(int j=9;j>=0;j--)
			{
				if(v[j]==0)
				{
					v[j]=1;
					break;
				}
			}
		}
		else
		{
			if(c[i]=='L')
			{
				for(int j=0;j<10;j++)
				{
					if(v[j]==0)
					{
						v[j]=1;
						break;
					}
				}
			}
			else
			{
				p=c[i]-'0';
				v[p]=0;
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<v[i];
	}
	return 0;
}