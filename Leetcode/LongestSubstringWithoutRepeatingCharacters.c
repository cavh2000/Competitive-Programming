//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i=0,j=0, max=0;
        
        while(i<s.size()){
            
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
                i++;
            }else{
                if(max<i-j)
                    max=i-j;
                
                while(st.find(s[i])!=st.end()){
                    st.erase(s[j]);
                    j++;
                } 
            } 
            
        }
        if(max<i-j)
            max=i-j;
        
        return max;
    }
};
