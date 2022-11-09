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
    vector<int>ans;
    void call(queue<Node*>st)
    {
        if(st.empty())return;
        
        while(!st.empty())
        {
            Node *f=st.front();st.pop();
            ans.push_back(f->val);
            queue<Node*>s;
            for(auto i:f->children)
                s.push(i);
            call(s);
        }
    }
    vector<int> preorder(Node* root) {
        if(!root)return ans;
        queue<Node*>st;
        st.push(root);
        call(st);
        return ans;
    }
};