class Solution {
    struct Node{
        unordered_map<int,Node*>link;
        bool contain(int i)
        {
            return link.find(i)!=link.end();
        }
        Node* get(int i)
        {
            return link[i];
        }
        void set(int i)
        {
            link[i]=new Node();
        }
    };
    Node*head=new Node();
public:
    int countDistinct(vector<int>& n, int k, int p) {
       int ans=0,count,j;
        
        for(int i=0;i<n.size();i++)
        {
            count=0;
            j=i;
            Node*t=head;
            while(j<n.size()&&count<=k)
            {
                if(n[j]%p==0)
                {
                    count++;
                }
                if(count>k)break;
                if(!t->contain(n[j]))
                {
                    ans++;
                    t->set(n[j]);
                }
                t=t->get(n[j]);
                j++;
            }
        }
        
        return ans;
    }
};