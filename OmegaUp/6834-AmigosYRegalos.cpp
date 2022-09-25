#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
lli c1,c2,x,y;

bool valida(lli N){
	lli NumMultDeX, NumMultDeY, NumMultDeXyY;
	
	NumMultDeXyY=N/(x*y);//Los de x y y
	NumMultDeX=(N/x);//Los de x aunque se repitan con los de y
	NumMultDeY=(N/y);//Los de y aunque se repitan con los de x
	lli complemento=N-(NumMultDeX+NumMultDeY-NumMultDeXyY);//Numeros que al no ser multiplos de x y y son usables para regalar
	
	lli MultDeXSinRepetir=NumMultDeX-NumMultDeXyY;
	lli MultDeYSinRepetir=NumMultDeY-NumMultDeXyY;
	
	lli aux1=0,aux2=0;/*
	aux1=max(c1-MultDeYSinRepetir,0ll);
	aux2=max(c2-MultDeYSinRepetir,0ll);*/
	

	
	

	if((c1-MultDeYSinRepetir)>aux1){//Para los c1 no hay problema si se toma los multiplos de el primo y
		aux1=c1-MultDeYSinRepetir;
	}
	if((c2-MultDeXSinRepetir)>aux2){//Para los c2 no hay problema si se toma los multiplos de el primo x
		aux2=c2-MultDeXSinRepetir;
	}
	//Podemos usar los multiplos del primo del otro amigo para llenar los del anterior, siempre y cuando todavia haya, de lo contrario es 0
	/*
	if((aux1+aux2)<=complemento){
		return true;
	}else{
		return false;
	}*/

	return aux1+aux2<=complemento;
	
}

int main(){
	cin>>c1>>c2>>x>>y;
	lli mitad,izq=c1+c2-2,der=(c1+c2)*2;//izq es c1+c2-2 porque si lo hicieramos individualmente podrias usar el 1 seguro: c1-1 + c2-1 =c1+c2-2
	//der=(c1+c2)*2 porque al ser 2 el num primo más pequeño esto me asegura que al dividir entre dos en la binaria me de al menos el numero justo de numeros necesarios para regalar
	// ejemplo c1=5 x=2, 5*2 seria 1 2 3 4 5 6 7 8 9 10 sin multiplos de 2 quedarian 1 3 5 7 9, exactamente los 5 para regalar, si mi limite máximo fuera 5 no saldíra
	
	while(der-izq>1){
		mitad=(izq+der)/2;
		if(valida(mitad)){
			der=mitad;
		}else{
			izq=mitad;
		}
	}
	cout<<der<<"\n";
}
