#include <bits/stdc++.h>
using namespace std;

int main(){
	int m, n;
	cin>>m>>n;
	
	int recipiente[m][n]; //Una matriz donde guardar los valores de las muestras 
	int valores[m][n];//Los valores minimos de la suma de valores de las muestras al moverse las bacterias 
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>recipiente[i][j];
			valores[i][j]=0;
		}
	}
	
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j==0){//Valor default donde inician
				valores[i][j]=recipiente[i][j];
			}else if(i==0){//Compara con el anterior de la columna porque no hay elementos más a la izquierda
				valores[i][j]=valores[i][j-1]+recipiente[i][j];
			}else if(j==0){//Compara con el anterior de la fila porque no hay elementos más arriba
				valores[i][j]=valores[i-1][j] + recipiente[i][j];
			}else{//Ya no estas en los bordes del recipiente, compara entre el de la izquierda y arriba
				valores[i][j]=min(valores[i][j-1], valores[i-1][j])+recipiente[i][j];
			}
			
		}
	}
	
	cout<<valores[m-1][n-1];
	
	return 0;
}
