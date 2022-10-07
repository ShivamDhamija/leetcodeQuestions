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
    struct comp{
        bool operator()(string a,string b)
        {           
            
            int i=0,j=0;
        while(i<a.size()&&j<b.size())
        {
            if(a[i]>b[j])
                return 1;
            else if(a[i]<b[i])
                return 0;
            i++;j++;
        }
        return  !(a.size()<=b.size());
        }
    };
    priority_queue<string,vector<string>,comp>se;
    void call(TreeNode* r,string &s)
    {
        if(!r)return ;
        s.push_back(r->val+'a');
        if(!r->left&&!r->right)
        {
            reverse(s.begin(),s.end());
            se.push(s);
           reverse(s.begin(),s.end());
          s.pop_back();
            return ;
        }
        
        call(r->left,s);
        call(r->right,s);
        s.pop_back();
    }
    // bool check(string a,string b)
    // {
    //     int i=0,j=0;
    //     while(i<a.size()&&j<b.size())
    //     {
    //         if(a[i]>b[j])
    //             return false;
    //         else if(a[i]<b[i])
    //             return 1;
    //         i++;j++;
    //     }
    //     return  (a.size()<=b.size());
    // }
    // string call(TreeNode* r)
    // {
    //     if(!r)return "";
    //     if(!r->left&&!r->right)
    //         {string a;a=('a'+r->val);return  a;}
    //     string le=call(r->left);
    //     string ri=call(r->right);
    //     char t1;
    //     t1=r->val+'a';
    //     ri.push_back(t1);
    //     le.push_back(t1);
    //     string t;
    //     t=(t1);
    //     if(le==t)
    //     {
    //         return ri;
    //     }
    //     else if(ri==t)
    //     {
    //         return le;
    //     }
    //     else if(check(le,ri)) 
    //     {
    //         return le;
    //     }
    //     return ri;
    // }
    string smallestFromLeaf(TreeNode* root) {
        string s="";
          call(root,s);
        return se.top();
    }
};