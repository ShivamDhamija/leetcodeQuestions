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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)return list2;
        if(!list2)return list1;
        ListNode *a=NULL,*p = new ListNode(0);
        while(list1&&list2){
            if(list1->val<=list2->val){
                p->next=list1;
                list1=list1->next;
            }else
            {
                p->next=list2;
                list2= list2->next;
            }
            p=p->next;
            if(a== NULL)
            a=p;
        }
    if(list1)p->next=list1;
    if(list2)p->next=list2;
        return a;
    }
};