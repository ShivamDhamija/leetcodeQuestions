class Solution {
public:
    stack<long long>st;
    void fib(int k)
    {
        st.push(1);st.push(1);
        int c=0, a=1,b=1;
        while(c<=k)
        {
            c=a+b;
            a=b;
            b=c;
            st.push(c);
        }
    }
    int findMinFibonacciNumbers(int k) {
        int no=0;
        fib(k);
        while(k>0&&!st.empty())
        {
            int t=st.top();st.pop();
            while(t<=k)
            {
                no++;
                k-=t;
            }
        }
        return no;
    }
};