//https://codeforces.com/contest/1201/problem/B
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli; 
int MakeZero(vector <lli> v)
{
	lli sum=0;
	for(lli i=1;i<v.size();i++)
	{
		sum+=v[i];
	}
 
	if((sum+v[0])%2 == 0 && v[0]<=sum)
	{
		return 1;
	} 
	else
	{
		return -1;
	} 
} 
																																																				 
int main() 
{
	vector <lli> v;
	lli n;
	cin>>n;
	v.resize(n);
	for(lli i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	if(MakeZero(v)==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}