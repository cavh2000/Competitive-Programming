//https://www.hackerrank.com/challenges/array-left-rotation/problem
vector<int> rotateLeft(int d, vector<int> arr) {
    d %= arr.size();
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }

    for(int i=0;i<arr.size()-d;i++){
        arr[i] = arr[i+d];
    }
    int j=0;
    for(int i=arr.size()-d;i<arr.size();i++){
        arr[i] = temp[j];
        j++;
    }

    return arr;
}
