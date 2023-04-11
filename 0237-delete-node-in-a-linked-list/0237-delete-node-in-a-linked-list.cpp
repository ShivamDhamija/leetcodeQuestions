/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* n) {
        ListNode *p=NULL;
        while(n->next)
        {
            p=n;
            n->val=n->next->val;
            n=n->next;
        }
        p->next=NULL;
    }
};