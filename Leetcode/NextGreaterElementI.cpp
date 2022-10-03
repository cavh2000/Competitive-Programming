//https://leetcode.com/problems/next-greater-element-i/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> nextGreater;
        for(int i=0;i<nums2.size();i++){
            nextGreater[nums2[i]]=-1;
        }
        
        stack<int> s;
        s.push(0);
        
        for(int i=0;i<nums2.size();i++){
            while(!s.empty() && nums2[s.top()] < nums2[i]){
                nextGreater[nums2[s.top()]] = nums2[i];
                s.pop();
            }
            s.push(i);
        }
        
        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
            ans[i]=nextGreater.find(nums1[i])->second;
        }
        
        return ans;
    }
};
