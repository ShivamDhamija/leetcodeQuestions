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
        queue<int>q;
        for( auto i = h; i != NULL ;i = i->next)
            q.push(i->val);
        int p=q.front();
        h = new ListNode(q.front());
         ListNode* temp=h;
        q.pop();
        while(q.size()>0)
        {
            int n=q.front();
            q.pop();
            temp->next=new ListNode(gcd(p,n));
            temp=temp->next;
            temp->next=new ListNode(n);
            temp=temp->next;
            p=n;
        }
        return h;
    }
};