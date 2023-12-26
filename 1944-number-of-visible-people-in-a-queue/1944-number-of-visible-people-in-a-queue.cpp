class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& h) {
       // vector<int>a(h.size());
        stack<int>s;
        for(int i=h.size()-1;i>=0;i--)
        {
            int t=h[i],j=0;
            h[i]=s.size();
            while(s.size()!=0&&t>=s.top())s.pop(),j++;
            if(s.size()!=0)j++;
            h[i]=j;
            s.push(t);            
        }
        return h;
    }
};