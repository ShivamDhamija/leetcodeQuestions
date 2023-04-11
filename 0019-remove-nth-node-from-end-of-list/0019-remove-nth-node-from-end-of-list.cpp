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
    ListNode* removeNthFromEnd(ListNode* h, int n) {
        if(!h)return h;
        int no=0;
        ListNode*p=h;
        while(p)
        {
            p=p->next;no++;
        }
        if(n==no)return h->next;
        p=h;
        no-=(n);
        while(--no)
            p=p->next;
        p->next=p->next->next;
        return h;
    }
};