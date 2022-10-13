//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=0;
        int k=1;
        
        for(int i=0;i<nums.size();i++){
            if(nums[s]!=nums[i]){
                swap(nums[s+1], nums[i]);
                s++;
                k++;
            }
        }
        return k;
    }
};
