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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        TreeNode*t;
        int i=0;
        vector<TreeNode*>vec;
        while(!q.empty())
        {
            int si=q.size();
            while(si--)
            {
               
                t=q.front();
                q.pop();
                if(i==1)
                    vec.push_back(t);
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
            }
            if(i==1)
            {
                int j=0;
                int size=vec.size();
                int temp;
                while(j<size/2)
                {
                    //cout<<vec[j]->val<<" "<<vec[size-j-1]->val<<endl;
                    temp=vec[j]->val;
                    vec[j]->val=vec[size-j-1]->val;
                    vec[size-j-1]->val=temp;
                    j++;
                }
                vec.clear();
               // cout<<vec.size()<<" ";
            }
            i=1-i;
        }
        
        
        return root;
    }
};