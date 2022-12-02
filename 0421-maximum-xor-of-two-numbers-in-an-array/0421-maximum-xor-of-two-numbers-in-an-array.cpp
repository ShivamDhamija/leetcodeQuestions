class Solution {
    struct Node{
        Node*link[2];
        bool contain(int i)
        {
            return link[i]!=NULL;
        }
        void set(int i)
        {
            link[i]=new Node();
        }
        Node* get(int i)
        {
            return link[i];
        }
    };
    Node*head=new Node();
    int  ans;
    void insert(int &n)
    {
        
        Node*t=head;
        for(int i=30;i>=0;i--)
        {
            int  a=1<<i;
            int b=a&n;
            if(b>0)
                b=1;
            if(!t->contain(b))
            t->set(b);
            t=t->get(b);
        }
        
    }
    void find(int &n)
    {
        Node*t=head;
        int c=0;
        for(int i=30;i>=0;i--)
        {
            int  a=1<<i;
            int b=a&n;
            if(b>0)
                b=1;
            if(t->contain(!b))
            {
                c+=a;
                t=t->get(!b);
            }
            else
                t=t->get(b);
        }
        ans=max(ans,c);
    }
public:
    int findMaximumXOR(vector<int>& n) {
        ans=0;
        for(auto i:n)
        insert(i);
        for(auto i:n)
        find(i);
        return ans;
    }
};