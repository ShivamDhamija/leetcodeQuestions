/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* call(string &t,int &index,int lev)
    {
       
        if(index>t.size())return NULL;
        
        int count=0;
        int ind=index;
       
        while(ind<t.size()&&t[ind]=='-')
        {
            count++;
            ind++;
        }
        if(count<lev)
            return NULL;
         
        string s="";
        while(ind<t.size()&&t[ind]!='-')
        {
            s+=t[ind];
            ind++;
        }
        if(s=="")return NULL;
        index=ind;
        TreeNode *p=new TreeNode(stoi(s));
        //cout<<p->val;
        p->left=call(t,index,lev+1);
        p->right=call(t,index,lev+1);
        
        return p;
    }
    TreeNode* recoverFromPreorder(string t) {
        int index=0;
        return call(t,index,0);
    }
};