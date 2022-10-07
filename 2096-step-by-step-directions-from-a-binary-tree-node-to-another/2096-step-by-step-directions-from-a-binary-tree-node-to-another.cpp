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
    string right="";
    int si=0;
    bool both=false;
    string find="";
    pair<TreeNode*,int> lca (TreeNode* root,int s,int d)
    {
        if(!root||both) return {NULL,0};
        pair<TreeNode*,int>l=lca(root->left,s,d);
        pair<TreeNode*,int>r=lca(root->right,s,d);
        if(l.first&&r.first)
        {
            both=1;
            if(l.first->val==d)
                {find="L";si=r.second;}
            else
                {find="R";si=l.second;}
            return {root,0};
        }
        
        if(root->val==s)
        {
            if(l.first)
            {
                both=1;
                find="L";
                si=0;
                return {root,0};
            }
             if(r.first)
            {   
                both=1;
                find="R";
                si=0;
                return {root,0};
            }
            return {root,1};
        }
        if(root->val==d)
        {
            if(l.first)
            {   
                both=1;
                si=l.second;
                return {root,0};
            }
             if(r.first)
            {
                both=1;
                si=r.second;
                return {root,0};
            }
            return {root,1};
        }
        if(r.first)return {r.first,r.second+1};
        if(l.first)return {l.first,l.second+1};
        return {NULL,0};
    }
    
    
    void call(TreeNode *node,int d,string &str)
    {
        if(!node||right!="")return ;
        
        if(node->val==d)
        {
            right=str;
            return ;
        }
        str+='L';
        call(node->left,d,str);
        str.pop_back();
        str+='R';
        call(node->right,d,str);
        str.pop_back();
    }
    string getDirections(TreeNode* root, int s, int d) {
        auto [ node, str]=lca(root,s,d);
        string st="R";
        if(find=="R")
            call(node->right ,d,st);
        else if(find=="L")
            {st="L";call(node->left,d,st);}
        if(node->val==s)
            si=0;
        
        
        string ans="";
        for(int i=0;i<si;i++)
            ans+='U';
        ans+=right;
        return ans;
    }
};