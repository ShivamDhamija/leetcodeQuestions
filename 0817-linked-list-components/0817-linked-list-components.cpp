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
    int numComponents(ListNode* h, vector<int>& n) {
        int a=0;
      //  if(n.size()==0)return 0;
        unordered_set<int>s;
        for(auto i:n)
            s.insert(i);
        
        while(h)
        {
            if(s.find(h->val)!=s.end()){
                while(h&&s.find(h->val)!=s.end())
                    h=h->next;
                a++;
            }
            else
                h=h->next;
        }
        
        
        return a;
    }
};