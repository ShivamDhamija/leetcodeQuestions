/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* r) {
        vector<vector<int>>ans;
        if(!r)return ans;
        queue<Node*>s;
        s.push(r);
        while(!s.empty())
        {
            int si=s.size();
            vector<int>v;
            while(si--)
            {
                r=s.front();
                s.pop();
                v.push_back(r->val);
                for(auto i:r->children)
                    s.push(i);
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};