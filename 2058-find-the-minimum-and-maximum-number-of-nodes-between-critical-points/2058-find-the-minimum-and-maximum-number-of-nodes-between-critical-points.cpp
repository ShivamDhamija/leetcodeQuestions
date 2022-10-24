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
    bool check(ListNode *p,ListNode *h)
    {
        int a=p->val,b=h->val,c=h->next->val;
        if((b>a&&b>c)||(b<a&&b<c))
            return true;
        return false;
    }
    vector<int> nodesBetweenCriticalPoints(ListNode* h) {
        vector<int>ans={-1,-1};
        if(!h)return ans;
        ListNode*p=h;
        h=h->next;
        int i=0;
        vector<int>v;
        while(h->next)
        {
            if(check(p,h))
                v.push_back(i);
            i++;
            p=h;
            h=h->next;
        }
            if(v.size()<2)return ans;
        sort(v.begin(),v.end());
           int si=v.size()-1;
        int mi=INT_MAX;
        for(int i=1;i<=si;i++)
        {
            mi=min(mi,v[i]-v[i-1]);
        }
        ans[0]=mi;
        ans[1]=v[si]-v[0];
        return ans;
    }
};