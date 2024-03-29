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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)return l2;if(!l2)return l1;
        ListNode*h=NULL,*p,*t;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                t=l1;
                l1=l1->next;
            }
            else
            {
                t=l2;
                l2=l2->next;
            }
            if(h==NULL)
            {
                p=t;
                h=t;
                continue;
            }
            p->next=t;
            p=p->next;
        }
        p->next=l1;
        if(l2)
        p->next=l2;
        return h;
    }
};