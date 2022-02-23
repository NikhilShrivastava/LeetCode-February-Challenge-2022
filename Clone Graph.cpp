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

        unordered_map<Node*,Node*> mp;
        
        if(!node) return NULL;
        queue<Node*> q;
        q.push(node);
        
        mp[node] = new Node(node->val, {});
        
        while(q.empty() == false){
            Node* tmp = q.front();
            q.pop();
            
            for(auto adj : tmp->neighbors)
            {
                if(mp.find(adj) == mp.end())
                {
                    q.push(adj);
                    mp[adj] = new Node(adj->val, {});
                }
                mp[tmp]->neighbors.push_back(mp[adj]);
            }
            
        }
        
   return mp[node];
    }
};
