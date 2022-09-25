//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left, right;
        left = binarySearchLeft(nums, target);
        right = binarySearchRight(nums, target);
        
        return {left, right};
        
    }
    
    int binarySearchLeft(vector<int>& nums, int target){
        int m, ans = -1;
        int l = 0;
        int r = nums.size()-1;
        
        while(l <= r){
            m = (r + l)/2;
            
            if(nums[m] == target){
                ans = m;
                r = m-1;
            }else if(nums[m] > target)
                r = m-1;
            else
                l = m+1;
        }
        
        return ans;
        
    }
    
    int binarySearchRight(vector<int>& nums, int target){
        int m, ans = -1;
        int l = 0;
        int r = nums.size()-1;
        
        while(l <= r){
            m = (r + l)/2;
            
            if(nums[m] == target){
                ans = m;
                l = m+1;
            }else if(nums[m] > target)
                r = m-1;
            else
                l = m+1;
        }
        
        return ans;
    }
};
