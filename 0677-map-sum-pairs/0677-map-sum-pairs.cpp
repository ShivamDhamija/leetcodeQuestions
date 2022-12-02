class MapSum {
    struct Node{
        Node*link[26];
        int va=0;
        bool end=false;
        void val(int v)
        {
            va+=v;
        }
        int getVal()
        {
            return va;
        }
        void minVal(int v)
        {
            va-=v;
        }
        void set(char c,Node*l)
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
        bool isEnd()
        {
            return end;
        }
        void setEnd()
        {
            end=true;
        }
    };
    Node*head;
    unordered_map<string,int>map;
    void call(Node* l,string &p,int i,int &s,int &c)
    {
        c=l->getVal();
        if(i==p.size())
        {
            s=c;
            return ;
        }
        if(!l->contain(p[i]))return;
        call(l->get(p[i]),p,i+1,s,c);
    }
    void del(string &s,int va)
    {
        Node*t=head;
        for(auto i:s)
        {
            if(!t->contain(i))
                t->set(i,new Node());
            t=t->get(i);
            t->minVal(va);
        }
    }
    void check(string&s)
    {
        Node*t=head;
        for(auto i:s)
        {
            if(!t->contain(i))
                t->set(i,new Node());
            t=t->get(i);
        }
        if(t->isEnd())
        {
            del(s,map[s]);
        }
    }
public:
    MapSum() {
        head =new Node();
    }
    
    void insert(string k, int v) {
        check(k);
        Node*t=head;
        for(auto i:k)
        {
            if(!t->contain(i))
                t->set(i,new Node());
            t=t->get(i);
            t->val(v);
        }
        t->setEnd();
        map[k]=v;
    }
    
    int sum(string p) {
        int s=0,c=0;
        call(head,p,0,s,c);
        return s;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */