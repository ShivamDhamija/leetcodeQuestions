class Solution {
public:
    vector<int>parent;
    vector<int>height;
    vector<int>size;
    
    bool parIsPar(int a)
    {
        return parent[a]==a;
    }
    int par(int a)
    {
        int i=parent[a];
        if(i==a)
            return a;
        return parent[a]=par(i);
    }
    int hei(int a)
    {
        return height[a];
    }
    bool connected(int a,int b)
    {
        if(par(a)==par(b))return true;
        return false;
    }
    void changePar(int a,int b)
    {
        parent[b]=a;
    }
    void addHei(int a)
    {
        height[a]++;
    }
    void addSize(int a,int b)
    {
        size[a]+=size[b];        
    }
    void connect(int i,int j)
    {
        if(connected(i,j))return ;
        int a=par(i),b=par(j);
        int h1=hei(a),h2=hei(b);
        if(h1>h2)
        {
            changePar(a,b);
            addSize(a,b);
        }
        else if(h2>h1)
        {
            changePar(b,a);
            addSize(b,a);
        }
        else
        {
            changePar(a,b);
            addHei(a);
            addSize(a,b);
        }
            
    }
    long long countPairs(int n, vector<vector<int>>& e) {
        parent.resize(n);
        height.resize(n,1);
        size.resize(n,1);
        for(int i=0;i<n;i++)
            parent[i]=i;
        
        for(int i=0;i<e.size();i++)
        {
            int a=e[i][0],b=e[i][1];
            connect(a,b);
        }
        queue<long long>q;
        for(int i=0;i<n;i++)
        {
            if(parIsPar(i))
                q.push(size[i]);
        }
        long long  si=n;
        long long ans=0;
        
        while(!q.empty())
        {
            int f=q.front();q.pop();
            si-=f;
            ans+=si*f;
        }
        
        return ans;
    }
};