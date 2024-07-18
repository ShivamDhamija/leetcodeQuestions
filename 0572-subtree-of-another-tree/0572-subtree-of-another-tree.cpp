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
    bool f(vector<string> &a, vector<string> &b, int l,int i=0)
    {
        while(l<a.size()&&i<b.size())
        {
            if(a[l]!=b[i])return false;
            i++,l++;
        }
        if(l<=a.size()&&i==b.size())return true;
        return false;
    }
    bool t(vector<string> &a, vector<string> &b){
        int l=0;
        while(l<a.size()){
            if(a[l]==b[0]&&f(a,b,l))
            {
                return true;
            }else
                l++;
        }
        return false;
    }
    void tr(TreeNode*r,vector<string>&s){
        if(!r){s.push_back("N");return ;}
        string a=to_string(r->val);
        s.push_back(a);   
        tr(r->left,s);
        tr(r->right,s);
    }
    bool isSubtree(TreeNode* r, TreeNode* s) {
        vector<string> a;
        vector<string> b;
        tr(r,a);
        tr(s,b);
        return t(a,b);
    }
};