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
    int pairSum(ListNode* h) {
        if(!h)return -1;
        int ans=INT_MIN;
        vector<int>v;
        
        ListNode*s=h;
        ListNode*f=h;
        while(f)
        {
            v.push_back(s->val);
            s=s->next;
            f=f->next->next;
        }
        int i=v.size()-1;
        while(s)
        {
            v[i]+=s->val;
        
            s=s->next;
            i--;
        }
        
        for(auto i:v)
            ans=max(ans,i);
        return ans;
        
    }
};