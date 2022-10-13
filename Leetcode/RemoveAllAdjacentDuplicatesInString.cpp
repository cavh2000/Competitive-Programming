//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        ans.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(ans.size() != 0 && s[i] == ans[ans.size()-1])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        
        return ans;
    }
};
