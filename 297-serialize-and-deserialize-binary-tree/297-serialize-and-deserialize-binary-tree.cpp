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
    void call1(TreeNode*root,string &v)
    {
        if(!root ){
            v+="-1001 ";
            return ;
        }
        v+=(to_string(root->val)+" ");
        call1(root->left,v);
        call1(root->right,v);
    }
    string serialize(TreeNode* root) {
         string v="";
        call1(root,v);
        v.pop_back();
        return v;
    }

    // Decodes your encoded data to tree.
     TreeNode* call2(vector<string>&a,int &ind)
    {
        //if(ind>=a.size())return NULL;
        if(a[ind]=="-1001"){ ind++;return NULL;}
        TreeNode*p=new TreeNode(stoi(a[ind]));
        ind++;
        p->left=call2(a,ind);
        p->right=call2(a,ind);
        return p;
    }
    TreeNode* deserialize(string data) {
        vector<string>v;
        for(int i=0;i<data.size();i++)
        {
            if(data[i]!=' ')
            {
                string s="";
                while(i<data.size()&&data[i]!=' ')
                {
                    s.push_back(data[i]);
                    i++;
                }
                v.push_back(s);
            }
        }
        int ind=0;
       return call2(v,ind);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));