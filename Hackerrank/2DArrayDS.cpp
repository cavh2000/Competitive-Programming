//https://www.hackerrank.com/challenges/2d-array/problem
int hourglassSum(vector<vector<int>> arr) {
    int sum=0, max=INT_MIN;
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
            sum += arr[i+1][j+1];
            sum += arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(max<sum)
                max=sum;
            sum = 0;
        }
    }
    
    return max;
}
