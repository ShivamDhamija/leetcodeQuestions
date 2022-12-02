class Solution {
    string ans;
    struct Node{
        Node*link[26];
        bool end=false;
        bool isEnd()
           { return end;}
        void setEnd()
           { end=true;}
        Node* get(char c)
           { return link[c-'a'];}
        bool contain(char c)
          {  return link[c-'a']!=NULL;}
        void set(char c,Node* l)
           { link[c-'a']=l;}
    };
    Node* head=new Node();
public:
    void call(Node* l,string &s)
    {
        //if(!l)return ;
        if(l->isEnd()&&ans.size()<s.size())
        {
            ans=s;
            
        }
        if(!l->isEnd())return ;
        for(int i=0;i<26;i++)
        {
            if(l->contain('a'+i))
            {
                s.push_back('a'+i);
                call(l->get('a'+i),s);
                s.pop_back();
            }
        }
            
    }
    string longestWord(vector<string>& w) {
        ans="";
        for(auto i:w)
        {
            Node*t=head;
            for(auto j:i)
            {
                if(!t->contain(j))
                    t->set(j,new Node());
                t=t->get(j);
            }
            t->setEnd();
        }
        head->setEnd();
        string s="";
        call(head,s);
        return ans;
    }
};