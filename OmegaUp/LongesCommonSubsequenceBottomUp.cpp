#include <bits/stdc++.h>
using namespace std;
 
int LCS(string c1, string c2){
	int i,j;
    int m=c1.size();
    int n=c2.size();
    int L[m+1][n+1];
    
    for(i=0;i<=m;i++){
    	L[i][0]=0;
	}
	for(i=0;i<=n;i++){
    	L[0][i]=0;
	}
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			
			if(c1[i-1]==c2[j-1]){
				L[i][j]=L[i-1][j-1]+1;
			}else{
				L[i][j]=max(L[i-1][j],L[i][j-1]);
			}
		}
	}
	
	return L[m][n];
}

int main(){
	string c1,c2;
	cin>>c1;
	cin>>c2;
 
    cout<<LCS(c1, c2);
 
    return 0;
}
