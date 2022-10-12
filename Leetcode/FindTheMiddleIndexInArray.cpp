//https://leetcode.com/problems/find-the-middle-index-in-array/
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
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
