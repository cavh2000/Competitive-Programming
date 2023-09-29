//https://leetcode.com/problems/isomorphic-strings/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> mp, pm;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]] && mp[s[i]]!=t[i]) return false;
            if(pm[t[i]] && pm[t[i]]!=s[i]) return false;
            mp[s[i]]=t[i];
            pm[t[i]]=s[i];
        }
        
        return true;
    }
};
