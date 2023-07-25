//https://www.hackerrank.com/challenges/maximum-element/problem
vector<int> getMax(vector<string> operations) {
    stack<int> s;
    vector<int> ans;
    stack<int> max;
    for(int i=0;i<operations.size();i++){
        if(operations[i][0]=='1'){
            s.push(stoi(operations[i].substr(2)));
            if(max.empty())
                max.push(s.top());
            else if(max.top()<=s.top()){
                max.push(s.top());
            }
        }else if(operations[i][0]=='2'){
            if(s.top()==max.top())
                max.pop();
            s.pop();
        }else{
            ans.push_back(max.top());
        }
    }
    
    return ans;
}
