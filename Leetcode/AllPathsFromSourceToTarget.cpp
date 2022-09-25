// https://leetcode.com/problems/all-paths-from-source-to-target/
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        queue<vector <int>> q;
        vector<int> path{0};
        q.push(path);
        
        while(!q.empty()){
            int nextVertex = q.front().back();
            if(nextVertex==graph.size()-1){
                ans.push_back(q.front());
            }else{
                for(int i=0;i<graph[nextVertex].size();i++){
                    path=q.front();
                    path.push_back(graph[nextVertex][i]);
                    q.push(path);
                }
            }
            q.pop();
        }
        return ans;
    }
};
