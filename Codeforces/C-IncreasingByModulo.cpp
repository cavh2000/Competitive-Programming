//https://codeforces.com/contest/1169/problem/C
#include<bits/stdc++.h>
using namespace std;
 
int n,m;
int num[300002];
 
bool sePuedeResolver(int mov)
{
	bool ret=true;
	int min=0;
	for(int i=1;i<=n;i++)
	{
		int base= num[i];
		int tope=(num[i] + mov)%m;
		
		if(base<=tope)
		{
			if(min<base)
			{
				min=base;
			}
			else
			{
				if(base<=min && min<=tope)
				{
					min=min;
				}
				else
				{
					ret=false;
				}
			}
		}
		else
		{
			if(0<=min && min<=tope)
			{
				min=min;
			}
			else
			{
				if(tope<min && min<base)
				{
					min=base;
				}
				else
				{
					min=min;
				}
			}
		}
	}
	return ret;
}
 
 
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
	}
	int ini =0,fin = m-1;
	int mitad,res;
	while(ini <= fin)
	{
		mitad = (ini + fin)/2;
		if(sePuedeResolver(mitad))
		{
			res= mitad;
			fin= mitad -1;
		}
		else
		{
			ini=mitad+1;
		}
	}
	cout<<res<<"\n";
}