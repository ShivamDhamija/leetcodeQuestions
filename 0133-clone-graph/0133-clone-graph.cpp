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
    Node* cloneGraph(Node* n) {
        if(!n)return NULL;
        unordered_map<int,Node*>m;
        unordered_set<int>s;
        queue<Node*>q;
        q.push(n);
        m[1] =new Node(1);
        while(q.size()>0){
            n = q.front();
            q.pop();
            if(!n||s.find(n->val)!=s.end())continue;    
            int i=0;
            vector<Node*>o = n->neighbors;
            vector<Node*>ne ;
            s.insert(n->val);
            while(i<o.size())
            {
                int c= o[i]->val;
                Node *t;
                if(m.find(c)!=m.end())
                    t=m[c];
                else
                {t= new Node(c);m[c]=t;}
                ne.push_back(t); 
                q.push(o[i]);
                i++;               
            }
            if(m.find(n->val)==m.end()) m[n->val]=new Node(n->val);
            m[n->val]->neighbors = ne;              
        }
        return m[1];
    }
};