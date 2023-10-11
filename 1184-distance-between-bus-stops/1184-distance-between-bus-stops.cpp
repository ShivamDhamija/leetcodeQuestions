class Solution {
public:
    int distanceBetweenBusStops(vector<int>& v, int s, int d) {
        int a=0,b=0,i=s,n=v.size();
        while(i!=d)
        {
            a+=v[i];
            i=(i+1)%n;
            //cout<<a<<endl;
        }
        i=d;
        while(i!=s)
        {
            b+=v[i];
            i=(i+1)%n;
        }
        return min(a,b);
    }
};