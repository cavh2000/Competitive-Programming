//https://leetcode.com/problems/largest-number/
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        long long int isZero=0;
        vector<string> num;
        
        for(int i=0;i<nums.size();i++){
            num.push_back(to_string(nums[i]));
            isZero+=nums[i];
        }
        
        if(!isZero)
            return "0";
        
        sort(num.begin(), num.end(), comp);
        string ans="";
        
        for(int i=0;i<nums.size();i++){
            ans+=num[i];
        }
        
        return ans;
    }
    
    static bool comp(string &a, string &b){
        if(a+b > b+a)
            return true;
        return false;
    }
};
