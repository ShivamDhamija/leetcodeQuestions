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
    unordered_map<int,vector<int>>m;
    unordered_set<int>s;
    int a=0;
    void help(TreeNode *n){
        if(n==NULL)return ;
        if(n->left!=NULL){
            m[n->val].push_back(n->left->val);
            m[n->left->val].push_back(n->val);
            help(n->left);
        }
        if(n->right!=NULL){
            m[n->val].push_back(n->right->val);
            m[n->right->val].push_back(n->val);
            help(n->right);
        }
    }
    void bfs(int i,int mi){
        if(s.find(i)!=s.end())return;
        s.insert(i);
        mi++;
        a=max(a,mi);
        for(auto j:m[i])bfs(j,mi);
    }
    int amountOfTime(TreeNode* root, int start) {
        help(root);
        bfs(start,-1);
        return a;
    }
};