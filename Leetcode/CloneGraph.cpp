//https://leetcode.com/problems/clone-graph/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return nullptr;
        
        unordered_map <Node*,Node*> nodeMap;
        nodeMap[node]=new Node(node->val,{});
        Node* curr;
        queue <Node*> q;
        q.push(node);
        
        while(!q.empty()){
            curr=q.front();
            q.pop();
            for(int i=0;i<curr->neighbors.size();i++){//Iterate trough all the nodes of the original graph
                if(nodeMap.count(curr->neighbors[i])==0){//If this node is not in the map
                    nodeMap[curr->neighbors[i]]=new Node(curr->neighbors[i]->val,{});//Put it in the map and create a copy of it
                    q.push(curr->neighbors[i]);//and push it in the queue
                }
                nodeMap[curr]->neighbors.push_back(nodeMap[curr->neighbors[i]]);
                //curr is the current original neighbor
                //curr->neighbors[i] are the neighbors of the original current node
                //nodeMap[curr] is the copy of current node
                //nodeMap[curr->neighbors[i]] are the copy neighbors current node
                //(nodeMap[curr]->neighbors) In the neighbors (copies of the original neighbors) of the copy of the current node 
                //(push_back(nodeMap[curr->neighbors[i]])) Push the copy of the neighbors of that current node
            }
        }
        return nodeMap[node];
    }
    
};
