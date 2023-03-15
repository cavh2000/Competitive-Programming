//https://codeforces.com/contest/545/problem/C
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
vector <lli> v2;
vector <pair<lli,lli>> v;
 
lli CuttingTrees(lli n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	
	lli trees=0;
 
	for(lli i=1;i<n-1;i++){
		if(v2[i-1]-v[i].second>=0)
			trees++;
		else if(v2[i]-v[i].second>=0){
			trees++;
			v2[i]=v2[i]-v[i].second;
		}
	}
 
	return trees+2;
}
																																																				 
int main() 
{
	
	lli n;
	cin>>n;
	v.assign(n,{0,0});
	v2.resize(n-1);
	for(lli i=0;i<n;i++)
		cin>>v[i].first>>v[i].second;
	
	for(lli i=0;i<n-1;i++)
		v2[i]=v[i+1].first-v[i].first-1;
 
 
	cout<<CuttingTrees(n);
 
	return 0;
}