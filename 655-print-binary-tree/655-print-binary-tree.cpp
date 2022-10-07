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
    
    vector<vector<string>>v;
    int w1,h1;
    
    int height(TreeNode*r)
    {
        if(!r)return 0;
        return max(height(r->left),height(r->right))+1;
    }
    
    void call(TreeNode* r,int i,int j)
    {
        if(!r||i>=h1||j>=w1||j<0)return;
       // cout<<i<<" "<<j<<endl;
        v[i][j]=to_string(r->val);
        int c=pow(2,h1-i-2);
        call(r->left,i+1,j-c);
        call(r->right,i+1,j+c);
        
    }
    
    vector<vector<string>> printTree(TreeNode* root) {
        int h=height(root);
        int w=pow(2,h)-1;
        w1=w;
        h1=h;
        v.resize(h,vector<string>(w,""));
        
        call(root,0,(w-1)/2);
        
        
        return v;
    }
};