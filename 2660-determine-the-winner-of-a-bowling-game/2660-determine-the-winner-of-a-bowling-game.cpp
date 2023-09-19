class Solution {
public:
    int isWinner(vector<int>& p1, vector<int>& p2) {
        int a1=p1[0],a2=p2[0];
        if(p1.size()>1)
        {
            a1+=p1[0]==10?2*p1[1]:p1[1];
            a2+=p2[0]==10?2*p2[1]:p2[1];
         }
        for(int i=2;i<p1.size();i++)
        {
            a1+=(p1[i-1]==10||p1[i-2]==10)?p1[i]*2:p1[i];
            a2+=(p2[i-1]==10||p2[i-2]==10)?p2[i]*2:p2[i];
        }
        return a1==a2?0:a1>a2?1:2;
    }
};