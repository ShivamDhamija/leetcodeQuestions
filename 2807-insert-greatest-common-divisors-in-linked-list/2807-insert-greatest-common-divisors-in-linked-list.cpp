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
    int gcd(int a, int b)
    {
        if(b>a)
            return gcd(b,a);
        if(b==0)return a;
        return gcd(a%b,b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* h) {
        ListNode* p=h;
        while(p->next)
        {
            p->next= new ListNode(gcd(p->val,p->next->val), p->next);
            p=p->next->next;
        }
        return h;
    }
};