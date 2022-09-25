//https://leetcode.com/problems/palindromic-substrings/
class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            count+=loop(i,i,s);//Loop for odd palindrome
            count+=loop(i,i+1,s);//Loop for even palindrome
        }
        
        return count;
    }
    
    int loop(int l, int r, string s){
        int count=0;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            count++;
            l--; r++;
        }
        
        return count;
    }
};
