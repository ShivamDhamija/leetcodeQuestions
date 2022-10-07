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
    void run(vector<string>&v,TreeNode* root,string& s){
        if(!root)return ;
        
        if(!root->left&&!root->right)
        {
            string c=to_string(root->val);
            int len=c.size();
            s+=c;
            v.push_back(s);
            while(len--)
            s.pop_back();
            return ;
        }
        string c=to_string(root->val);
        s+=c;
        int len=c.size();
        s.push_back('-');
        s.push_back('>');
        run(v,root->left,s);
        run(v,root->right,s);
        while(len--)
        s.pop_back();
        s.pop_back();
        s.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        if(!root)
        {
            return v;
        }
        string s="";
        run(v,root,s);
        return v;
        
    }
};