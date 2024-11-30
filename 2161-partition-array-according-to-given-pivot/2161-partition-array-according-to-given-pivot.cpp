class Solution {
public:
    vector<int> pivotArray(vector<int>& n, int p) {
        queue<int>q;
        queue<int>s;
        queue<int>v;
        vector<int>a;
        for(auto i:n){
            if(i<p)q.push(i);
            else if(i>p)s.push(i);
            else v.push(i);
        }
        while(q.size()>0){
            a.push_back(q.front());q.pop();
        }
        while(v.size()>0){
            a.push_back(v.front());v.pop();
        }
        while(s.size()>0){
            a.push_back(s.front());s.pop();
        }
        return a;
    }
};