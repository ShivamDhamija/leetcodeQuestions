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
    ListNode* find(ListNode* h,int k)
    {
        if(!h)return h;
        if(k==1)
            return h;
        return find(h->next,k-1);
    }
    
    ListNode* reverse(ListNode*h)
    {
        if(!h)return h;
        if(!h->next)return h;
        ListNode*t=reverse(h->next);
        ListNode*nxt=h->next;
        h->next=NULL;
        
        nxt->next=h;
        return t;
    }
    void t(ListNode* h)
    {
        if(!h)return ;
        cout<<h->val<<" ";
        t(h->next);
    }
    ListNode* swapNodes(ListNode* h, int k) {
        if(!h)return h;
        ListNode* a=find(h,k);
        
       h= reverse(h);
        // t(h);
        // cout<<endl;
        ListNode*b=find(h,k);
        if(!a||!b)return NULL;
        h=reverse(h);
        int t=a->val;
        a->val=b->val;
        b->val=t;
        return h;
    }
};