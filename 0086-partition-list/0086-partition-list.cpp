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
    ListNode* partition(ListNode* h, int x) {
        ListNode*p1=new ListNode();
        ListNode*p2=new ListNode();
        ListNode*l1=p1;
        ListNode*l2=p2;
        while(h)
        {
            int a=h->val;
            if(a<x)
            {
                l1->next=new ListNode(a);
                l1=l1->next;
            }
            else
            {
                l2->next=new ListNode(a);
                l2=l2->next;
            }
            h=h->next;
        }
        if(p2->next)
        l1->next=p2->next;
        return p1->next;
    }
};