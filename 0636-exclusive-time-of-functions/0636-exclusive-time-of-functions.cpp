class Solution {
public:
    struct Node{
      int val,sta,mi;
        string ch;
        Node(string s)
        {
            int a=0,b=0;
            int i=0;
            while(s[i]!=':')
            {
                a=a*10+s[i]-'0';i++;
            }
            i++;
            ch="";
            while(s[i]!=':')
            {
                ch.push_back(s[i]);
                i++;
            }
            i++;
            while(i<s.size())
            {
                b=b*10+s[i]-'0';i++;
            }
            val=a;sta=b;mi=0;
        }
    };
    
    vector<int> exclusiveTime(int n, vector<string>& l) {
        stack<Node*>st;
        vector<int>v(n);
        
        for(int i =0;i<l.size();i++)
        {
            Node *no=new Node(l[i]);
            
            if(no->ch=="start")
            {
                st.push(no);
            }
            else
            {
                Node* f=st.top();
                st.pop();
                int val=f->val,sta=f->sta,mi=f->mi;
                if(!st.empty())
                    st.top()->mi+=no->sta-sta+1;
                v[val]+=no->sta-sta+1-mi;
            }
        }
        
        return v;
    }
};