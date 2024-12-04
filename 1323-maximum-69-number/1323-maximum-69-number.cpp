class Solution {
public:
    int maximum69Number (int n) {
        stack<int>s;
        while(n){
            s.push(n%10);
            n/=10;
        }
        n=0;
        int c,o=0;
        while(s.size()>0){
            c=s.top();
            if(o==0&&c==6){c=9;o=1;}
            n=n*10+c;
            s.pop();
        }
        return n;
    }
};