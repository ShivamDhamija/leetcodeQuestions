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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)return l2;
        if(!l2)return l1;
        ListNode *h=NULL,*p=new ListNode(0);
        int c=0,a=0;
        while(l1&&l2){
            a=l1->val+l2->val+c;
            l1->val=a%10;
            c=a/10;
            p->next=l1;
            l1=l1->next;
            l2=l2->next;
            p=p->next;
            if(!h)h=p;
        }
        if(l1)p->next=l1;
        if(l2)p->next=l2,l1=l2;
        while(l1){
            a=l1->val+c;
            l1->val=a%10;
            c=a/10;
            p=l1;
            l1=l1->next;
        }
        if(c)p->next=new ListNode(c);
        return h;
    }
};