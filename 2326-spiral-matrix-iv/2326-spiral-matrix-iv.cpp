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
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* h) {
        int t=0,b=m-1,l=0,r=n-1;
        vector<vector<int>>ans(m,vector<int>(n,-1));
        
        while(h)
        {
            for(int i=l;i<=r&&h!=NULL;i++)
            {
                ans[t][i]=h->val;
                h=h->next;
            }
            t++;
            for(int i=t;i<=b&&h!=NULL;i++)
            {
                ans[i][r]=h->val;
                h=h->next;
            }
             r--;
            for(int i=r;i>=l&&h!=NULL;i--)
            {
                ans[b][i]=h->val;
                h=h->next;
            }
            b--;
            for(int i=b;i>=t&&h!=NULL;i--)
            {
                ans[i][l]=h->val;
                h=h->next;
            }
            l++;
        }
        
        return ans;
    }
};