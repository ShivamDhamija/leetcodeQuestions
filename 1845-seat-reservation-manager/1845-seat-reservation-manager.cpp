class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>q;
    SeatManager(int n) {
        for(int i=1;i<=n;i++)
        q.push(i);
    }

    int reserve() {
        int c=-1;
        if(!q.empty())
        {
            c=q.top();
            q.pop();
        }
        return c;
    }
    
    void unreserve(int s) {
        q.push(s);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */