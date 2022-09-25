//https://leetcode.com/problems/missing-number/
//It's similar to the single number problem
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            n^=nums[i];
            n^=i+1;
        }
        
        return n;
    }
};
