/* https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans{0,0};
        unordered_map <int,int> map;
        int val;
        
        for(int i=0;i<nums.size();i++){
            val=target-nums[i];
            if(map.count(val)){
                ans[0]=map.at(val);
                ans[1]=i;
                return ans;
            }else{
                map[nums[i]]=i;
            }
        }
        return ans;
    }
};
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums{2,7,11,15};
    int target=9;
    vector<int> ans{0,0};
    unordered_map <int,int> map;
    int val;
    
    for(int i=0;i<nums.size();i++){
        val=target-nums[i];
        if(map.count(val)){
            ans[0]=map.at(val);
            ans[1]=i;
        }else{
            map[nums[i]]=i;
        }
    }
    
    for(int i=0;i<nums.size();i++){
        cout<<ans[i];
    }
}
