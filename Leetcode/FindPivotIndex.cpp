//https://leetcode.com/problems/find-pivot-index/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumRtoL = accumulate(nums.begin(), nums.end(), 0);
        int sumLtoR = 0;
        
        for(int i=0;i<nums.size();i++){
            sumRtoL-=nums[i];
            if(sumRtoL==sumLtoR)
                return i;
            sumLtoR+=nums[i];
        }
        
        return -1;
    }
};
