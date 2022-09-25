#include<bits/stdc++.h>
using namespace std;

int ELIS(int A[], int n){
	int subsec[n];
	
	for(int i=0;i<n;i++){
		subsec[i]=1;
	}
	
	int maximo=1;
	
	for(int i=n-1;i>=0;i--){
		for(int j=i+1;j<n;j++){
			cout<<i<<" "<<j<<endl;
			cout<<A[i]<<"<"<<A[j]<<endl;
			if(A[i]<A[j]){
				subsec[i]=max(subsec[i],1+subsec[j]);
			}
			cout<<subsec[i]<<endl;
		}
	}
	
	for(int i=0;i<n;i++){
		if(maximo<subsec[i]){
			
			maximo=subsec[i];
		}
		cout<<subsec[i]<<" ";
	}
	
	return maximo;
}

int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	cout<<endl<<ELIS(A,n);
	
}
