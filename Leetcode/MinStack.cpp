//https://leetcode.com/problems/min-stack/
class MinStack {
public:
    stack<int> stk, min;
    int v;
    MinStack() {
        int val;
    }
    
    void push(int val) {
        stk.push(val);
        
        if(min.size() == 0){
            v = val;
            min.push(v);
        }else{
            if(v > val)
                v = val;
            min.push(v);
        }  
    }
    
    void pop() {
        stk.pop();
        min.pop();
        if(min.size())
            v = min.top();
        else
            v = INT_MAX;
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return min.top();
    }
};
