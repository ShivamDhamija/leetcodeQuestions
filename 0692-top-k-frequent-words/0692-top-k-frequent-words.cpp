class Solution {
    struct Node{
        Node*link[26];
        int quant=0;
        
        Node* get(char c)
        {
            return link[c-'a'];
        }
        void set(char c,Node*n)
        {
            link[c-'a']=n;
        }
        bool contain(char c)
        {
            return link[c-'a']!=NULL;
        }
        void setEnd()
        {
            quant++;
        }
        int isEnd()
        {
            return quant;
        }
    };
    Node *head=new Node(); 
    vector<pair<int,string>>v;
    static bool sort2(pair<int,string>a,pair<int,string>b)
    {
        if(a.first==b.first)
            return a.second<b.second;
        return a.first>b.first;
    }
public:
    void call(Node* l,string&s)
    {
        if(l->isEnd()>0)
            v.push_back({l->isEnd(),s});
        if(!l)return;
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
    
    vector<string> topKFrequent(vector<string>& w, int k) {
        
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
        v.resize(0);
        string s="";
        call(head,s);
        stable_sort(v.begin(),v.end(),sort2);//greater<pair<int,string>>() );
        vector<string>ans;
        for(int i=0;i<k;i++)
            ans.push_back(v[i].second);
        
        return ans;
    }
    
};