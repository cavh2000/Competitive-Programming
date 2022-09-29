//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int sell=prices[0];
        int profit=0;
        
        for(int i=0;i<prices.size();i++){
            sell=prices[i];
            if(buy>sell)
                buy=sell;
            if(profit<(sell-buy))
                profit=sell-buy;
        }
        
        return profit;
    }
};
