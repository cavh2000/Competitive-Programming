//https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar=0;
        int maxOfAll=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            maxSoFar+=nums[i];
            if(maxSoFar<nums[i])
                maxSoFar=nums[i];
            if(maxOfAll<maxSoFar)
                maxOfAll=maxSoFar;
        }
        
        return maxOfAll;
    }
};
