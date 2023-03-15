//https://codeforces.com/contest/1175/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
	lli n,k,t,i=0;
	cin>>t;
 
	while(t){
		cin>>n>>k;
		while(n!=0){
			if(n%k!=0){
				i+=n%k;
				n-=n%k;
			}else{
				n=n/k;
				i++;
			}
		}
		cout<<i<<"\n";	
		t--;
		i=0;	
	}
	
}