// https://leetcode.com/problems/find-if-path-exists-in-graph/
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector <vector<int>> adjList(n);//We initialize the list with n si its adjList[n][];
        for(int i=0;i<edges.size();i++){//Fill adj list
            adjList[edges[i][0]].push_back(edges[i][1]);
            adjList[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> queue4bfs;//Queue for bfs.
        
        vector <bool> seen(n,false);
        queue4bfs.push(source);//We initialize the queue (witch we use to know what vertex we are currently at) with start
        seen[source]=true;//We already saw the start
        
        while(!queue4bfs.empty()){//While there are vertex to visit
            int currentVertex=queue4bfs.front();//Get the current vertex
            for(int i=0;i<adjList[currentVertex].size();i++){//Iterate through all the vertexes in the list for the current vertex
                int nextVertex=adjList[currentVertex][i];//Get the next vertex we can go to
                if(!seen[nextVertex]){//If it has not been seen
                    seen[nextVertex]=true;//Mark it as seen
                    queue4bfs.push(nextVertex);//Put it in the queue for us to visit later
                    //If it's been seen we just wait for its turn
                }
            }
            queue4bfs.pop();//We pop the vertex we were at to move to the next in the queue
        }
        return seen[destination];//We return the boolean value of seen (if we saw the vertex we can reach it)
    }
};
