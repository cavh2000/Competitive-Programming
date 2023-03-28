//https://codeforces.com/contest/58/problem/A
#include<bits/stdc++.h>
using namespace std;
     
int main(){
  string s;
  string h="hello";
  cin>>s;
    	
  int i=0, j;
  for( j=0;j<s.size();j++){
    if(h[i]==s[j])
      i++;	
    }
    	
    if(i>4 || i==4 && j==s.size()-1)
    		cout<<"YES";
    else
    		cout<<"NO";
    	
    	
    	return 0;
    }
