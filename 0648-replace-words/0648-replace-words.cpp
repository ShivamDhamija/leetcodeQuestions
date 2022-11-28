class Solution {
    
    struct Node{
        Node*link[26];
        bool end=false;
        
        void create(char c,Node*l)
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
        void setEnd()
        {
            end=true;
        }
        bool isEnd()
        {
            return end;
        }
    };
    
    Node*head=new Node();
    
public:
    
    void find(string &t,string &n,Node*l,int i,bool &b)
    {
        if(i==t.size()||b)
            return ;
        if(l->isEnd())
        {
            t=n;  
            b=true;
            return ;
        }
        if(!l->contain(t[i]))
            return ;
        //cout<<i<<" ";
        n.push_back(t[i]);
        find(t,n,l->get(t[i]),i+1,b);
    }
    string replaceWords(vector<string>& d, string s) {
        s+=' ';
        
        for(auto i:d)
        {
            Node*t=head;
            for(auto j:i)
            {
                if(!t->contain(j))
                {
                    t->create(j,new Node());
                }
                t=t->get(j);
            }
            t->setEnd();
        }
        
        queue<string >q;
        string t="";
        for(auto i:s)
        {
            if(i==' ')
            {
                if(head->contain(t[0]))
                {
                    bool b=false;
                    string n="";
                    //cout<<"S";
                    find(t,n,head,0,b);
                }
                 q.push(t);
                t="";
            }else
                t.push_back(i);
        }
                
            
        s="";
        while(!q.empty())
        {
            s+=q.front();q.pop();
            s.push_back(' ');
        }
        s.pop_back();
        return s;
        
    }
};