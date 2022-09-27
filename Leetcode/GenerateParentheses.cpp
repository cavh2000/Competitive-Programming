// https://leetcode.com/problems/generate-parentheses/
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector <string> answers;
        
        backtrack(0, 0, "", n, answers);
        
        return answers;
    }
    //amtOp amount of (, amtCl amount of )
    void backtrack(int amtOp, int amtCl, string ans, int n, vector<string>& answers){
        if(amtOp == n && amtCl == n){
            answers.push_back(ans);
            return;
        }
        
        if(amtOp < n)
            backtrack(amtOp+1, amtCl, ans+'(', n, answers);
        
        if(amtCl < amtOp)
            backtrack(amtOp, amtCl+1, ans+')', n, answers);  
    }
};
