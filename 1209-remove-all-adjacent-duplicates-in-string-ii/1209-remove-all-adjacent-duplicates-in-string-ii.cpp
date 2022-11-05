class Solution {
public:
    struct Node{
        char val;
        Node*pre;
        Node*nxt;
        Node (char c)
        {
            val=c;
            pre=NULL;
            nxt=NULL;
        }
    };
    vector<int>chara;
    Node* head;//new Node(s[0]);
        Node* tail;
    void check(Node* h,int &k,int &si)
    {
        int t=0;
        char c=h->val;
        Node*no=h;
        while(no&&no->val==c)
        {
            t++;
            no=no->pre;
            if(t==k)break;
        }
        if(t==k&&!no)
        {
            si-=k;
            chara[c-'a']-=k;
            head=NULL;
            tail=NULL;
           // cout<<c<<endl;
            return ;
        }
        if(t==k)
        {
            Node* tem=no->nxt;
            no->nxt=NULL;
            tem->pre=NULL;
            chara[c-'a']-=k;
            si-=k;
            tail=no;
           // cout<<c<<endl;
            return;
        }
    }
    string removeDuplicates(string s, int k) {
        if(s.size()==0)return "";
        head=NULL;//new Node(s[0]);
         tail=NULL;
        chara.resize(26);
        int size=0;
        for(int i=0;i<s.size();i++)
        {
            
            chara[s[i]-'a']++;
            Node* no=new Node(s[i]);
            if(size==0)
            {
                tail=no;
                head=no;
            }
            else
            {
                tail->nxt=no;
                no->pre=tail;
                tail=no;
            }
            size++;
            if(size>=k&&chara[s[i]-'a']>=k)
            check(tail,k,size);
        }
        
        s="";
        while(head)
        {
            s.push_back(head->val);
            head=head->nxt;
        }
        return s;
    }
};