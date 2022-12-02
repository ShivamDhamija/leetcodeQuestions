class WordDictionary {
    struct Node{
        Node*link[26];
        bool end=false;
        bool isEnd()
        {
            return end;
        }
        void setEnd()
        {
            end=true;
        }
        bool contain(char c)
        {
            return link[c-'a']!=NULL;
        }
        void set(char c,Node*l)
        {
            link[c-'a']=l;
        }
        Node* get(char c)
        {
            return link[c-'a'];
        }
    };
    Node* head;
    void call(Node*l,bool &find,string &s,int i)
    {
        if(i==s.size()&&l->isEnd())
        {
            find=true;
            return ;
        }
        if(i==s.size())return ;
        if(find)
            return;
        if(s[i]!='.'&&!l->contain(s[i]))return;
        if(s[i]!='.'&&l->contain(s[i]))
        {
            call(l->get(s[i]),find,s,i+1);
            return;
        }
        for(int j=0;j<26;j++)
        {
            if(l->contain('a'+j))
            {
                call(l->get('a'+j),find,s,i+1);
            }
        }
    }
public:
    WordDictionary() {
        head=new Node();
    }
    
    void addWord(string w) {
     Node *t=head;
        for(auto i:w)
        {
            
            if(!t->contain(i))
                t->set(i,new Node());
            t=t->get(i);
        }
        t->setEnd();
    }
    
    bool search(string w) {
        bool find=false;
        
        call(head,find,w,0);
            
        return find;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */