class Solution {
    
    struct Node{
        Node*link[26];
        bool end=false;
        bool contain(char c)
        {
            return link[c-'a']!=NULL;
        }
        
        void create(char c,Node* n)
        {
            link[c-'a']=n;
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
    
    Node *head=new Node();
public:
    void help(Node* t,vector<string>&v,string &s, int &count)
    {
        if(count==3)return ;
        if(t->isEnd()&&count<3)
                {
                    count++;
                    v.push_back(s);
                }
        for(int i=0;i<26;i++)
        {
            if(t->contain('a'+i))
            {
                
                s.push_back('a'+i);
                help(t->get('a'+i),v,s,count);
                    s.pop_back();
            }
        }
    }
    void find(string &s,vector<string>&v)
    {
        Node*t=head;
        for(auto i:s)
        {
            if(!t->contain(i))return;
            t=t->get(i);
        }
        int count=0;
        help(t,v,s,count);
    }
    
    vector<vector<string>> suggestedProducts(vector<string>& p, string w) {
      
        for(auto i:p)
        {
            Node *t=head;
            for(auto j:i)
            {
                if(!t->contain(j))
                {
                    Node *ne=new Node();
                    t->create(j,ne);
                }
                t=t->get(j);
            }
            t->setEnd();
        }
        vector<vector<string>>ans;
        string s="";
        for(auto i:w)
        {
            s.push_back(i);
            vector<string>v;
            if(ans.size()==0||ans[ans.size()-1].size()>0)
            find(s,v);
                ans.push_back(v);
        }
        
        return ans;
    }
};