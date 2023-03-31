//https://leetcode.com/problems/valid-palindrome/description/
class Solution {
public:
    bool isPalindrome(string s) {
        bool b = true;
        int l=0, r=s.size()-1;

        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);

        while(l<r && b){
            while(l<r && cond(s[l]))
                l++;
            while(r>l && cond(s[r]))
                r--;

            if(s[l]!=s[r])
                b=false;

            l++; r--;
        }

        return b;
    }

    bool cond(char c){
        return ((c<=122 && c>=97) || (c>=48 && c<=57)) ? false : true;
    }
};
