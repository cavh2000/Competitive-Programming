#include <bits/stdc++.h>
using namespace std;

int knapsack(int tamano[], int valor[], int capmoc/*capacidadmochila*/, int numel /*numero de elementos*/){
    int memoizador[numel+1][capmoc+1];
	//En este caso se hizo la bottom down para hacer algo diferente a lo de la clase
    for (int i=0;i<=numel;i++){
        for (int j=0;j<=capmoc;j++){
            if (i==0 || j==0){//Caso base
            	memoizador[i][j] = 0;
			}else if (tamano[i-1]<=j){
				memoizador[i][j] = max(valor[i-1]+memoizador[i-1][j-tamano[i-1]], memoizador[i-1][j]);
			}else{
				memoizador[i][j]=memoizador[i-1][j];
			}
        }
    }
    
    
    for (int i=0;i<=numel;i++){
        for (int j=0;j<=capmoc;j++){
			cout<<memoizador[i][j]<<" ";
        }
        cout<<"\n";
    }
 
    return memoizador[numel][capmoc];
}
 

int main(){
    int N,S;//N los objetos, S la capacidad de la mochila
    cin>>S>>N;
    int tamano[N],valor[N];
    for(int i=0;i<N;i++){
    	cin>>tamano[i]>>valor[i];
	}
     
    cout << knapsack(tamano, valor, S, N);
     
    return 0;
}
