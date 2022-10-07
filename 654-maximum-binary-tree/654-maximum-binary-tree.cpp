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
    // int find(int i,int j,vector<int>&n)
    // {
    //     int no=i;
    //     for(int k=i;k<=j;k++)
    //         no=n[k]>n[no]?k:no;
    //     return no;
    // }
    // TreeNode* tree(vector<int>&n,int i,int j)
    // {
    //     if(i>j)return NULL;
    //     int ind=find(i,j,n);  
    //     TreeNode* l=tree(n,i,ind-1);
    //     TreeNode* r=tree(n,ind+1,j);
    //     return new TreeNode(n[ind],l,r);
    // }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        // return tree(nums,0,nums.size()-1);
        
        stack<TreeNode*>st;
        TreeNode* node;
        for (auto i:nums)
        {
            node=new TreeNode(i);
            while(!st.empty()&&st.top()->val<node->val)
            {
                node->left=st.top();
                st.pop();
            }
            
            if(!st.empty())
               st.top()->right=node;
            
            st.push(node);
        }
        
        while(st.size()>1)st.pop();
        
        return st.top();
    }
};