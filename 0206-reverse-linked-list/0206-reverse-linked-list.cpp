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
    ListNode* reverseList(ListNode* h) {
        if(!h)return h;
        ListNode*n=h->next,*p=NULL;
        while(n)
        {
            h->next=p;
            p=h;
            h=n;
            n=n->next;
        }
        h->next=p;
        return h;
    }
};