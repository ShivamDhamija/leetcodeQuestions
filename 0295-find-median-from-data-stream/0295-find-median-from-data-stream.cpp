class MedianFinder {
public:
    priority_queue<int>ma;
    priority_queue<int,vector<int>,greater<int>>mi;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(ma.size()==0)
        {
            ma.push(num);
        }
        else if( ma.size()==mi.size())
        {
            if(num<mi.top())
                ma.push(num);
            else
            {
                int x=mi.top();
                mi.pop();
                mi.push(num);
                ma.push(x);
            }
        }
        else if(ma.size()>mi.size())
        {
            if(num>ma.top())
                mi.push(num);
                else
                {
                    int x=ma.top();ma.pop();
                    ma.push(num);mi.push(x);
                }
        }
        
    }
    
    double findMedian() {
        double mid;
        if(ma.size()>mi.size())
            mid=ma.top();
        else
            mid=(mi.top()+ma.top())/2.0;
        return mid;
    }
};