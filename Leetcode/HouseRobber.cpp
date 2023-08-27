//https://leetcode.com/problems/house-robber/description/
class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0, b = 0, tmp;
        for(int i=0;i<nums.size();i++){
            tmp = max(nums[i] + a, b);
            a = b;
            b = tmp;
        }
        return b;
    }
};
