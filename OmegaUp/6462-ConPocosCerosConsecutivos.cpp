#include<bits/stdc++.h>
using namespace std;

int MenosCeros(int n){
	if(n==1)	{
		return 2;
	}else if(n==2){
		return 4;
	} else if(n==3){
		return 7;
	}
	
	return MenosCeros(n-1)+MenosCeros(n-2)+MenosCeros(n-3);
}

int main ()
{
	int n;
	cin>>n;
	
	cout<<MenosCeros(n);
	
	return 0;
}
