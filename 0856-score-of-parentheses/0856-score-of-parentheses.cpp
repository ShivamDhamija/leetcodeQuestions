class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int score = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(-1);
            }
            else {
                score=0;
                while(st.top()!=-1)
                {
                    score+=st.top();
                    st.pop();
                }
                st.pop();
                score*=2;
                if(score==0)
                    score=1;
                st.push(score);
            }
        }
        score=0;
        while(!st.empty())
        {
            score+=st.top();
            st.pop();
        }
        return score;
    }
};