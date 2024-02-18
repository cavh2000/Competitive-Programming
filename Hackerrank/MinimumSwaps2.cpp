//https://www.hackerrank.com/challenges/minimum-swaps-2
int minimumSwaps(vector<int> arr) {
    int i=0, aux, swaps = 0;
    while(i<arr.size()){
        if(arr[i]!=i+1){
            aux = arr[i];
            arr[i] = arr[aux-1];
            arr[aux-1] = aux;
            swaps++;
        }else
            i++;
    }
    return swaps;
}
