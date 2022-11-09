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
            
            queue<Node*>s;
            for(auto i:f->children)
                s.push(i);
            call(s);
            ans.push_back(f->val);
        }
    }
    vector<int> postorder(Node* root) {
        if(!root)return ans;
        queue<Node*>st;
        st.push(root);
        call(st);
        return ans;
    }
};