class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        stack<int>st;
        int i=0,j=0;
        
        while(true)
        {
            if((st.empty()||st.top()!=po[j])&&i<pu.size())
            {
                st.push(pu[i]);
              //  cout<<1<<" "<<pu[i]<<endl;
                i++;                
            }
            else if(!st.empty()&&st.top()==po[j]&&j<po.size())
            {
                st.pop();
                
                j++;
            }
            else
                break;
        }
        if(i==pu.size()&&j==po.size())
        return true;
        return false;
    }
};