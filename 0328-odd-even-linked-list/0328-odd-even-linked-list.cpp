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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return head;
        ListNode *e=NULL,*et=NULL,*o=NULL,*ot=NULL;
        ListNode*p=head;
        long long count=1;
        while(p)
        {
            if(count%2==0)
            {
                if(!e)
                {
                    e=p;
                    p=p->next;
                    et=e;
                    et->next=NULL;
                }
                else
                {
                    et->next=p;
                    et=et->next;
                    p=p->next;
                    et->next=NULL;
                }
            }
            else
            {
               if(!o)
                {
                    o=p;
                    p=p->next;
                    ot=o;
                    ot->next=NULL;
                }
                else
                {
                    ot->next=p;
                    ot=ot->next;
                    p=p->next;
                    ot->next=NULL;
                } 
            }
            count++;
        }
        
        if(!o)
        o=e;
        else
        ot->next=e;
        return o;
    }
};