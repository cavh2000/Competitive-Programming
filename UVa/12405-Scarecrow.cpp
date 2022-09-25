#include<bits/stdc++.h>
using namespace std;

int main (){
	int i=0,a,b,scrw=0;
	int fertil,nofertil;
	string v;
	char c;
	vector <int> w;
	cin>>b;
	
	while(b--){
		v="";
		scrw=0;
		cin>>a;
		
		for(i=0;i<a;i++)
		{
			cin >> c;
            v += c;
		}	
		
		fertil=nofertil=0;
		for(i=1;i<=a;i++){
			if(v[i]=='.'){
				fertil++;	
			}
			
			if(v[i-1]=='.'){
				if(i+3<=a || i+1==a || i==a || i==a-2){
					scrw++;i=i+2;
				}	
			}
		}
		w.push_back(scrw);
		scrw=0;
	}

	for(i=0;i<w.size();i++){
		cout<<"Case "<<(i+1)<<": "<<w[i]<<endl;
	}
	
	return 0;
} 
