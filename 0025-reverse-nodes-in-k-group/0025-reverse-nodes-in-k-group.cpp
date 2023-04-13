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
    ListNode* reverseKGroup(ListNode* h, int k) {
        int c=0;
        ListNode*co=h;
        while(co&&c<k)
        {
            c++;
            co=co->next;
        }
        if(c<k)return h;
        ListNode *nxt=h;
        ListNode*p=NULL;
        ListNode*t;
        while(c--){
            t=h->next;
            h->next=p;
            p=h;
            h=t;
        }
       
         nxt->next=reverseKGroup(h,k);
        return p;
    }
};