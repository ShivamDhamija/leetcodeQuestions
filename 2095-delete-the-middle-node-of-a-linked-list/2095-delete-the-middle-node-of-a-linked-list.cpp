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
    ListNode* deleteMiddle(ListNode* h) {
        if(!h||!h->next)return NULL;
        ListNode*p=NULL;ListNode*s=h;ListNode*f=h;
        while(f&&f->next)
        {
            f=f->next->next;
            p=s;
            s=s->next;
        }
        p->next=s->next;
        return h;
    }
};