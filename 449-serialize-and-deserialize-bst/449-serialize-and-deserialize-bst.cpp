/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    void call2(TreeNode* root,string &d)
    {
        if(!root)return;
        d+=to_string(root->val)+" ";
        call2(root->left,d);
        call2(root->right,d);
    }
    string serialize(TreeNode* root) {
        string d;
        
        call2(root,d);
        return d;
    }

    // Decodes your encoded data to tree.
    TreeNode* call(vector<int>&p,vector<int>&v,int i,int j)
    {
        if(i>j)return NULL;
        TreeNode* root=new TreeNode(p[i]);
        int m=v[i];
        root->left=call(p,v,i+1,m-1);
        root->right=call(p,v,m,j);
        return root;
    }
    void release(string d,vector<int>&p)
    {
        for(int i=0;i<d.size();i++)
        {
            string s="";
            while(d[i]!=' ')
            {
                s+=d[i];
                i++;
            }
            p.push_back(stoi(s));
        }
    }
    TreeNode* deserialize(string d) {
        if(d.size()==0)return NULL;
        vector<int>p;
        release(d,p);
        vector<int>next(p.size(),p.size());
        stack<int>s;
        s.push(0);
        int i=1;
        while(i<p.size())
        {
            
            while(!s.empty()&&p[i]>p[s.top()])
            {
                next[s.top()]=i;
                s.pop();
            }
            s.push(i);
            i++;
        }
        return call(p,next,0,p.size()-1);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;