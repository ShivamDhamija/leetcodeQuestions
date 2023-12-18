class MyCalendarThree {
public:
    map<int,int>mp;
    MyCalendarThree() {
        
    }
    
    int book(int a, int b) {
        mp[a]++;
        mp[b]--;
        int ans=0,c=0;
        for(auto i:mp)
        {
            ans=max(ans,c+=i.second);
        }
        
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */