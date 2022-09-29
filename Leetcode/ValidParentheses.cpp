//https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                stk.push(s[i]);
           
            if(s[i]==')'){
                if(stk.size() && stk.top()=='(' )
                    stk.pop();
                else
                    return false;
            }

            
            if(s[i]==']'){
                if(stk.size() && stk.top()=='[' )
                    stk.pop();
                else
                    return false;
            }
            
            if(s[i]=='}'){
                if(stk.size() && stk.top()=='{' )
                    stk.pop();
                else
                    return false;
            }
                
        }
        
        if(!stk.size())
            return true;

        return false;
        
    }
};
