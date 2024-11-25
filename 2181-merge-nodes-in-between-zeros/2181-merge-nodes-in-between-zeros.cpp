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
    ListNode* mergeNodes(ListNode* h) {        
        ListNode*p = new ListNode(0);
        ListNode*b=p;  
        h=h->next;
        int a=0;
        while(h)
        {
            if(h->val==0){
                p->next=new ListNode(a);
                a=0;
                p=p->next;
            }
                a+=h->val;
            h=h->next;
        }
        return b->next;
    }
};