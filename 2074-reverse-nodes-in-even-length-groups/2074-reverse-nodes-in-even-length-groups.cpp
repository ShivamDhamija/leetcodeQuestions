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
    struct Node{
        int no;ListNode*n;
        Node(int a,ListNode*b)
        {
            no=a;
            n=b;
        }
    };
    ListNode* move(ListNode*p,ListNode*th)
    {
        while(th)
        {
            p->next=th;
            p=p->next;
            th=th->next;
            
        }
        return p;
    }
    ListNode* re(ListNode*th)
    {
        ListNode*p=th;
        th=th->next;
        p->next=NULL;
        while(th)
        {
            ListNode*nxt=th->next;
            th->next=p;
            p=th;
            th=nxt;
        }
        return p;
    }
    void t(ListNode*h)
    {
        while(h)
        {
            cout<<h->val<<" ";
            h=h->next;
        }
    }
    unordered_map<int,Node*>m;
    ListNode* reverseEvenLengthGroups(ListNode* h) {
        
        if(!h||!h->next)return h;
        int i=1,si=1;
        ListNode*p=h;
        while(h)
        {
            si--;
            if(si==0)
            {
                
               m[i]=new Node(i,p);
               
                p=h->next;
                h->next=NULL;
                h=p;
                i++;
                si=i;
            }
            else
            h=h->next;
        }
        if(p)
        {
            m[i]=new Node(i-si,p);
        }
        else
            i--;
        h=m[1]->n;
        p=h;
       // t()
        for(int j=2;j<=i;j++)
        {
            ListNode*th=m[j]->n;
            if((j%2==0&&m[j]->no%2==0)||(j==i&&j%2!=0&&m[j]->no%2==0))
            {
               th= re(th);
            }
           p= move(p,th);
        }
      //  t(h);
        return h;
    }
};