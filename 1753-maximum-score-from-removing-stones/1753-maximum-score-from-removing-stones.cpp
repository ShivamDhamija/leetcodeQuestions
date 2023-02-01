class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>q;
        q.push(a);q.push(b);q.push(c);
        c=0;
        while(q.size()>1)
        {
            a=q.top(),q.pop();
            b=q.top(),q.pop();
            c++;
            if(a>1)
                q.push(a-1);
            if(b>1)
                q.push(b-1);
        }
        return c;
    }
};