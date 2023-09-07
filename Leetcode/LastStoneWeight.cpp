//https://leetcode.com/problems/last-stone-weight/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        
        for(int i : stones)
            pq.push(i);
        
        while(pq.size()>1){
            int s=pq.top();
            pq.pop();
            s=abs(s-pq.top());
            pq.pop();
            pq.push(s);
        }
        
        if(pq.size())
            return pq.top();
        
        return 0;
    }
};
