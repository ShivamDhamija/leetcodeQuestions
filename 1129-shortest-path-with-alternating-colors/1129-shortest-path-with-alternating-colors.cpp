class Solution {
public:
    struct Node{
        int f,s,t;
        Node(int a,int b,int c)
        {
            f=a;s=b;t=c;
        }
    };
    void add(queue<Node*>&q, vector<vector<int>>&v,int a,int sum,int c)
    {
        c=abs(c-1);
        sum+=1;
        for( auto i:v[a])
        {
            Node* t=new Node(i,sum,c);
            q.push(t);
        }
    }
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& re, vector<vector<int>>& be) {
     
        vector<vector<int>>r(n,vector<int>());
        vector<vector<int>>b(n,vector<int>());
        vector<bool>rv(n);
        vector<bool>bv(n);
        for(int i=0;i<re.size();i++)
        {
            int a=re[i][0],b=re[i][1];
            r[a].push_back(b);
           // r[b].push_back(a);
        }
        for(int i=0;i<be.size();i++)
        {
            int a=be[i][0],bval=be[i][1];
            b[a].push_back(bval);
           // b[bval].push_back(a);
        }
        
        queue<Node*>q;
        Node* t=new Node({0,0,0});
        q.push(t);
        t=new Node({0,0,1});
        q.push(t);
            vector<int>ans(n,-1);
        while(!q.empty())
        {
            Node* f=q.front();
            q.pop();
            int a=f->f,sum=f->s,c=f->t;
            if(ans[a]==-1)
                ans[a]=sum;
            else 
                ans[a]=min(ans[a],sum);
            if(c==0&&rv[a]==1)
                continue;
            else if(c==1&&bv[a]==1)
                continue;
            if(c==0)
                rv[a]=1;
            else if(c==1)
                bv[a]=1;
            if(c==0)
                add(q,b,a,sum,c);
            else 
                add(q,r,a,sum,c);
        }
        
        
        return ans;
    }
};








