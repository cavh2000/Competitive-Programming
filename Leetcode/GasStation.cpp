//https://leetcode.com/problems/gas-station/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> gasInTank;
        int acum=0;
        for(int i=0;i<gas.size();i++){
            acum+=gas[i]-cost[i];
            gasInTank.push_back(gas[i]-cost[i]);
        }
        
        if(acum < 0)
            return -1;
        
        int ans=0;
        acum=0;
        for(int i=0;i<gas.size();i++){
            acum+=gasInTank[i];
            if(acum < 0){
                acum=0;
                ans=i+1;
            }
        }
        
        return ans;
    }
};
