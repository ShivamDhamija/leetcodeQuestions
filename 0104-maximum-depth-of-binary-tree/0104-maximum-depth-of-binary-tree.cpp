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
    int maxDepth(TreeNode* r) {
        if(r==NULL)return 0;
        int a=0;
        queue<TreeNode*>s;
        s.push(r);
        while(s.size()>0){
            int si=s.size();a++;
            while(si--){
                TreeNode* f=s.front();
                s.pop();
                if(f->left)s.push(f->left);
                if(f->right)s.push(f->right);
            }
        }
        return a;
    }
};