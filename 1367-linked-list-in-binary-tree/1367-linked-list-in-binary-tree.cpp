/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool check(TreeNode * r,ListNode* h)
    {
        if(!h)return true;
        if(!r)return false;
        if(r->val!=h->val)return false;
        return check(r->left,h->next)||check(r->right,h->next);
    }
        
    bool isSubPath(ListNode* h, TreeNode* r) {
        if(!r)return 0;
        queue<TreeNode*>q;
        q.push(r);
        while(!q.empty())
        {
            TreeNode* f=q.front();
            q.pop();
            if(f->val==h->val)
                if(check(f,h))
                    return true;
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        }
        
        return false;
       
    }
};