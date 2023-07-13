vector<int> reverseArray(vector<int> a) {
    int x, i = 0, j = a.size()-1;
    while(i<j){ 
        x = a[i];
        a[i] = a[j];
        a[j] = x;
        i++; j--;
    }
    
    return a;
}
