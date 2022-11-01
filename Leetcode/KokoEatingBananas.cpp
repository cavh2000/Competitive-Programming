class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int r = piles[0];
        
        for(int i=0;i<piles.size();i++){
            r = (r<piles[i]) ? piles[i] : r;
        }
        
        if(piles.size() == h)
            return r;
        
        long long int min = r;
        
        long long int l=1;
        long long int p;
        
        while(l<=r){
            p=(r+l)/2;
            long long int acum = 0;
            for(int i=0;i<piles.size();i++){
                long long int div = piles[i]/p;
                if(piles[i]%p != 0)
                    div++;
                acum+=div;
            }
   
            
            if(acum<=h){
                r=p-1;
                if(min>p)
                    min=p;
            }
  
            if(acum>h)
                l=p+1;
        }
        
        return min;
    }
};
