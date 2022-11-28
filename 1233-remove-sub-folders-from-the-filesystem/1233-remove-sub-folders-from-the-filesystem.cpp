class Solution {
    struct Node{
        map<string,Node*> link;
        
        bool end=false;
        
        void create(string c,Node* l)
        {
            link[c]=l;
        }
        map<string,Node*>ma()
        {
            return link;
        }
        bool contain(string c)
        {
            return link.find(c)!=link.end();
        }
        
        Node* get(string c)
        {
            return link[c];
        }
        
        void setEnd()
        {
            end=true;
        }
        
        bool isEnd()
        {
            return end;
        }
        
    };
    Node* head=new Node();
public:
    
    void find(string s,vector<string>&ans,Node*t)
    {
        if(t->isEnd())
        {   
            ans.push_back(s);
            return ;
        }
        map<string,Node*>ma=t->ma();
        for(auto i:ma)
        {
            find(s+i.first,ans,i.second);
        }
    }
    
    vector<string> removeSubfolders(vector<string>& f) {    
        Node *t;
        for(auto i:f)
        {
            t=head;
            i.push_back('/');
            string s="/";
            for(int k=1;k<i.size();k++)
            {
                char j=i[k];
                if(j=='/')
                {
                    if(!t->contain(s))
                    {
                        t->create(s,new Node());
                    }
                    t=t->get(s);
                    s="";
                }
                
                s.push_back(j);
            }
            t->setEnd();
        }
        t=head;
        string s="";
        vector<string>ans;
        find(s,ans,t);
        
        return ans;
    }
};