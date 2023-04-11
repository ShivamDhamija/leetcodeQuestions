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
        int c=0;
        ListNode*p=l1;
        ListNode*pr=NULL;
        while(l1&&l2)
        {
            int a=l1->val+l2->val+c;
            c=a/10;
            l1->val=a%10;
            pr=l1;
            l1=l1->next;
            l2=l2->next;
        }
        if(l2)
            pr->next=l2;
        l1=pr->next;
        while(l1)
        {
            int a=l1->val+c;
            c=a/10;
            l1->val=a%10;
            pr=l1;
            l1=l1->next;
        }
        if(c)
        {
            pr->next=new ListNode(c);
        }
        return p;
    }
};