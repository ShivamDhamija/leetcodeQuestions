class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q;
        vector<int>a;
        for(int i=0;i<k;i++){
            while(!q.empty()&&nums[q.back()]<nums[i])q.pop_back();
            q.push_back(i);
        }
        a.push_back(nums[q.front()]);
        for(int i=k;i<nums.size();i++){  
            if(q.front()<i-k+1)q.pop_front();
            while(!q.empty()&&nums[q.back()]<nums[i])q.pop_back();
            q.push_back(i);
            a.push_back(nums[q.front()]);
        }
        return a;
    }
};