/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        TreeNode* a;
        queue<TreeNode*>v;
        v.push(c);
        while(v.size()>0){
            TreeNode* n=v.front();
            v.pop();
            if(!n)continue;
            if(n->val==t->val){
                a=n;break;
            }
            v.push(n->left);
            v.push(n->right);
        }
        return a;
    }
};