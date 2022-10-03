//https://leetcode.com/problems/daily-temperatures/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> days(temperatures.size(), 0);
        stack<int> s;
        s.push(0);

        for(int i=1;i<temperatures.size();i++){
                while(!s.empty() && temperatures[s.top()] < temperatures[i]){
                    days[s.top()] = i - s.top();
                    s.pop();
                }
            s.push(i);
        }
        
        return days;
    }
};
