//https://leetcode.com/problems/longest-palindromic-substring/
class Solution {
public:
    string longestPalindrome(string s) {
        string longest(1,s[0]);
        for(int i=0;i<s.size();i++){
            longest=loop(i,i,s,longest);
            longest=loop(i,i+1,s,longest);
        }
        
        return longest;
    }
    
    string loop(int l, int r, string s, string longest){
        while(l>=0 && r<s.size() && s[l]==s[r]){
            if(longest.size()<r-l+1){
                longest=s.substr(l,r-l+1);
            }
            l--; r++;
        }
        
        return longest;
    }
};
