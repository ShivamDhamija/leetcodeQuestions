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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>> >q;
        ListNode *a= NULL, *t,*p;
        pair<int,ListNode*>k;
        for(auto i :lists)if(i)q.push({i->val,i});
        while(!q.empty()){        
            k=q.top();
            q.pop();
            t=k.second;            
            if(a==NULL){
                a=t;
                p=t;
            }else {
                p->next=t;
                p=p->next;
            }                    
            if(t->next == NULL)continue;    
            q.push({t->next->val,t->next});
            t->next=NULL;
        }      
        return a;
    }
};