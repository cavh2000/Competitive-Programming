//https://www.hackerrank.com/challenges/birthday-cake-candles/problem
int birthdayCakeCandles(vector<int> candles) {
    int tallest = 0, acum = 1;
    for(int i=0; i<candles.size();i++){
        if(tallest < candles[i]){
            tallest = candles[i];
            acum = 1;
        }else if(tallest == candles[i])
            acum++;
    }
    
    return acum;
}
