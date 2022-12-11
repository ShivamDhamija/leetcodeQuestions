class Allocator {
public:
    int n;
    vector<int>v;
    Allocator(int N) {
        n=N;
        v.resize(n);
    }
    
    int allocate(int size, int mID) {
        
        int count=0;
        int i;
        for( i=0;i<n;i++)
        {
            if(v[i]!=0)
                count=0;
            else 
                count++;
            if(count==size)
                break;
        }
        int j=-1;
       // cout<<i<<endl;
        if(count==size)
        {
            i=i-count+1;
            j=i;
            for(int k=i;k<i+count;k++)
                v[k]=mID;
        }
        return j;
    }
    
    int free(int mID) {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==mID)
                {v[i]=0;count++;}
        }
        return count;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->free(mID);
 */