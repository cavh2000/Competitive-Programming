//https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        
        while(left<right){
            if(nums[left]%2!=0){
                while(nums[right]%2>0 && left<right)
                    right--;
                swap(nums[left],nums[right]);
                left++;
                right--;
            }else
                left++;
        }
        
        return nums;
    }
};
