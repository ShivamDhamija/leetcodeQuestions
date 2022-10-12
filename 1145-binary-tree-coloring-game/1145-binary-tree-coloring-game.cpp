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
    int l=0,ri=0,p=1;
    
    void left(TreeNode*r)
    {
        if(!r)return ;
        l++;
        left(r->left);
        left(r->right);
    }
    void right(TreeNode*r)
    {
        if(!r)return ;
        ri++;
        right(r->left);
        right(r->right);
    }
    void parent(TreeNode*r,int x)
    {
        if(!r)return ;
        if(r->val==x)
        {
            p--;
            left(r->left);
            right(r->right);
        }
        else
        {
            if(r->left)p++;
            if(r->right)p++;
            parent(r->left,x);
            parent(r->right,x);
        }
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        
        parent(root,x);
        cout<<l<< " "<<ri<<" "<<p;
        if(l+ri+1<p||ri+p+1<l||p+l+1<ri)return true;
        return false;
    }
};