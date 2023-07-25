//https://www.hackerrank.com/challenges/ctci-balanced-brackets/problem
string isBalanced(string expression) {
    stack<char> s;
    bool ban = true;
    
    for(int i=0;i<expression.size();i++){
        if(expression[i]=='(' || expression[i]=='{' || expression[i]=='['){
            s.push(expression[i]);
        }else if(s.size()<=0){
            ban = false;
        }else if((expression[i]==')' && s.top()!='(') || 
                (expression[i]=='}' && s.top()!='{') ||
                (expression[i]==']' && s.top()!='[')){
            ban = false;
        }else{
            s.pop();
        }
    }
    
    if(ban && s.size()==0)
        return "YES";
    return "NO";
}
