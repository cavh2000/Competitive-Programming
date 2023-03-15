//https://codeforces.com/contest/1206/problem/A
#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
	int i,a,A=0,b,B=0,aux;
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>aux;
		if(aux>A)
		{
			A=aux;
		}
	}
	cin>>b;
	for(i=0;i<b;i++)
	{
		cin>>aux;
		if(aux>B)
		{
			B=aux;
		}
	}
	
	cout<<A<<" "<<B;
	return 0;
}