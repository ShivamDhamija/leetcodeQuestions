class Solution {
public:
    void add(vector<int>&num,int i,deque<int>&d)
    {
        while(!d.empty()&&num[i]>num[d.back()])
        {
            d.pop_back();
        }
        d.push_back(i);
    }
    vector<int> maxSlidingWindow(vector<int>& num, int k) {
        vector<int>v;
        deque<int>d;
        for(int i=0;i<k;i++)
        {
            add(num,i,d);
        }
        
        v.push_back(num[d.front()]);
        for(int i=k;i<num.size();i++)
        {
            if(!d.empty()&&d.front()<=(i-k))
                d.pop_front();
            add(num,i,d);
         
              v.push_back(num[d.front()]);
        }
        return v;
    }
};