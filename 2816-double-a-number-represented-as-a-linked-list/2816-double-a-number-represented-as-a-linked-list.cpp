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
    int re(ListNode*h)
    {
        if(h==NULL)return 0;
        int r=re(h->next);
        int v=h->val*2+r;
        h->val=v%10;
        return v/10;
    }
    ListNode* doubleIt(ListNode* h) {
        int r=re(h);
        if(r==0)return h;
        ListNode* ru=new ListNode(r,h);
        return ru;
    }
};