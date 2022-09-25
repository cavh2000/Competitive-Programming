//https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
        int j;
        string ans="";
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                j=i;
                while(i>=0 && s[i]!=' '){
                    i--;
                }
                ans+=s.substr(i+1,j-i)+" ";
            }
        }
        ans.pop_back();
        return ans;
    }
};
