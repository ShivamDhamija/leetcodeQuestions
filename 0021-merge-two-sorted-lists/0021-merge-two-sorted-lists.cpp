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
        if(!l1)return l2;
        if(!l2)return l1;
        ListNode* h= NULL;
        ListNode* c= NULL;
        while(l1&&l2)
        {
            if(l1->val<l2->val)
            {
                if(h==NULL)
                c=l1,h=c;
                else
                    c->next=l1,c=c->next;
                l1=l1->next;
            }
            else
            {
                if(h==NULL)
                c=l2,h=c;
                else
                    c->next=l2,c=c->next;
                l2=l2->next;
            }
           
        }
        if(l1)
            c->next=l1;
        if(l2)
            c->next=l2;
        return h;
    }
};