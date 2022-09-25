#include <bits/stdc++.h>
using namespace std;

long long int NumMax(long long int a, long long int b) { return (a > b) ? a : b; }
 
long long int NumMax(long long int a, long long int b, long long int c) { return max(max(a, b), c); }

long long int SubArregloSumMax(long long int A[],long long int inicio,long long int final){
	long long int mitad,izq,der,suma,sumaizq,sumader,sumacentro;
	
	if(inicio==final){
		return A[inicio];
	}
	
	mitad=(inicio+final)/2;
	
	izq=SubArregloSumMax( A,inicio,mitad);
	der=SubArregloSumMax(A,mitad+1,final);
	
	suma=0;
	sumaizq=A[mitad];
	for(int i=mitad;i>=inicio;i--){
		suma+=A[i];
		if(suma>sumaizq){
			sumaizq=suma;
		}
	}
	
	suma=0;
	sumader=A[mitad+1];
	for(int i=mitad+1;i<=final;i++){
		suma+=A[i];
		if(suma>sumader){
			sumader=suma;
		}
	}
	
	sumacentro=sumaizq+sumader;
	suma=NumMax(sumaizq,sumader,sumacentro);
	
	return NumMax(izq,der,suma);
}


int main(){
	long long int a,n;
    cin>>n;
    long long int A[n];
    for(int i=0;i<n;i++){
        cin>>a;
        A[i]=a;
    }

    cout<<SubArregloSumMax( A, 0,n-1);
}
