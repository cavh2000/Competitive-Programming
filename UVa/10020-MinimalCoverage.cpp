#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int m, x, y;

	int pivote=0, maximoDerecha=0,aux;
	
	cin >> t;
	while(t--){
		vector<pair<int, int> > segmento, respuestas;
		cin >> m;
		
		while(cin >> x >> y){
			if(x == 0 && y == 0) break;
			segmento.push_back(make_pair(x, y));
		}
		sort(segmento.begin(), segmento.end());
		
		bool haycambios=true;
		int continua=0;
		pivote=0, maximoDerecha=0;
		
		while(haycambios){
			haycambios=false;
			maximoDerecha=pivote;
			
			for(int i=continua;i<segmento.size();i++){
				continua=i;
				if(segmento[i].first <= pivote){
					if(segmento[i].second > maximoDerecha){
						maximoDerecha=segmento[i].second;
						
						aux=i; haycambios=true;
					}
				}else{
					break;
				}
			}
			
			pivote=maximoDerecha;
			if(haycambios){
				respuestas.push_back(segmento[aux]);
			}
			
			if(maximoDerecha>=m){
				break;
			}
		}
		

		
		if(maximoDerecha>=m){
			cout<<respuestas.size()<<endl;
			for(int i=0;i<respuestas.size();i++){
				cout<<respuestas[i].first<<" "<<respuestas[i].second<<endl;
			}
		}else{
			cout<<"0"<<endl;
		}
		
		if(t>0){
			cout<<endl;	
		} 
	}
	return 0;
}
