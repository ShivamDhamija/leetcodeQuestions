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
     void call(TreeNode* root,int &s,deque<int>q)
    {
        if(!root)return; 
        if(q.size()==2)
        {
            if(q.front()%2==0)
            {
                s+=root->val;
            }
            q.pop_front();           
        }
            q.push_back(root->val);
        
        call(root->left,s,q);
        call(root->right,s,q);    
        
    }
    int sumEvenGrandparent(TreeNode* root) {
        deque<int>q;
        int s=0;
        call(root,s,q);
        return s;
    }
};