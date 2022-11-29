class Solution {
    struct Node{
        Node*link[26];
        bool end=false;
        int len=0;
        
        void add(char c,Node* l)
        {
            link[c-'a']=l;
        }
        bool contain(char c)
        {
            return link[c-'a']!=NULL;
        }
        Node* get(char c)
        {
            return link[c-'a'];
        }
        void setEnd( int l)
        {
            len=l;
            end=true;
        }
        int isEnd()
        {
            return len;
        }
    };
    Node* head=new Node();
    int ans;
public:
    void help(string s)
    {
        reverse(s.begin(),s.end());
        Node* n=head;
        for(auto i:s)
        {
            if(!n->contain(i))
            {
                n->add(i,new Node());
            }
            n=n->get(i);
        }
       // cout<<s.size()<<" ";
        n->setEnd(s.size());
    }
    
    void find(Node*l)
    {
        bool fi=false;
        
        for(int i=0;i<26;i++)
        {
            if(l->contain('a'+i))
            {
                fi=true;
                find(l->get('a'+i));
            }
        }
       // cout<<l->isEnd()<<" ";
        if(!fi)
            ans+=l->isEnd()+1;
    }
    int minimumLengthEncoding(vector<string>& w) {
        for(auto i:w)
            help(i);
         ans=0;
        find(head);
        return ans;
    }
};





