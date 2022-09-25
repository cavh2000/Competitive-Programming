#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
 
lli _mergeSort(lli arr[], lli temp[], lli izq, lli der);
lli merge(lli arr[], lli temp[], lli izq, lli mid, lli der);
 
 
/* Aqui se mezcla*/
lli merge(lli arr[], lli temp[], lli izq, lli mid, lli der){
    lli i, j, k;
    lli invcont = 0;
 
    i = izq;
    j = mid;
    k = izq;
    while ((i <= mid - 1) && (j <= der)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            invcont=invcont+(mid - i);
        }
    }
 

    while (i <= mid - 1){
    	temp[k++] = arr[i++];
	}

    while (j <= der){
        temp[k++] = arr[j++];
	}
 
    /*Pasar al array original*/
    for (i = izq; i <= der; i++){
    	arr[i] = temp[i];	
	}
 
    return invcont;
}

 
/*Mediante el orden de merge se obtienen las inversiones*/
lli _mergeSort(lli arr[], lli temp[], lli izq, lli der){
    lli mid, invcont = 0;
    if (der > izq) {
        mid = (der + izq) / 2;
 
        /*Las inversiones totales seran las sumas de las de la derecha y las de la derecha más las que salgan al mezclar*/
        invcont+=_mergeSort(arr, temp, izq, mid);
        invcont+=_mergeSort(arr, temp, mid + 1, der);
 
        invcont+=merge(arr, temp, izq, mid + 1, der);
    }
    return invcont;
}

lli mergeSort(lli arr[], lli n){
    lli temp[n];
    return _mergeSort(arr, temp, 0, n-1);
}
 
int main(){
	lli t, n;
	cin >> t;
	while(t--){
		cin >> n;
		lli arr[n];
		for(lli i = 0; i < n; ++i){
			cin >> arr[i];
		}
		cout <<mergeSort(arr, n)<<"\n";
	}
	
    return 0;
}
