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
    unordered_map<int,Node*>m;
    Node* cloneGraph(Node* node) {
        if(!node)return {};
        int val = node->val;
        if(m.find(val)!=m.end())return m[val];
        Node* a= new Node(val);
        m[val]=a;
        vector<Node*>n;
        for(auto i:node->neighbors){
            n.push_back(cloneGraph(i));
        }
        a->neighbors=n;
        return a;
    }
};