class Solution {
public:
    long long maxKelements(vector<int>& n, int k) {
     priority_queue<double>q;   
        for(auto i:n)
            q.push(i);
        long long s=0;
        while(k)
        {
            k--;
            double t=q.top();q.pop();
            s+=t;
           // cout<<t<<" ";
            q.push(ceil(t/3));
        }//cout<<endl;
        return s;
    }
};