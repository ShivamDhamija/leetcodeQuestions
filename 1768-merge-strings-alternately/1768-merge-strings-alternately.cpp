class Solution {
public:    
    string mergeAlternately(string w1, string w2) {
        int p1=0,p2=0;
        string ans="";
        while(p1<w1.length()||p2<w2.length())
        { 
            if(p1<w1.length())
                {ans.push_back(w1[p1]);}
            if(p2<w2.length())
                {ans.push_back(w2[p2]);}
            p1++;
            p2++;
        }
       
        return ans;
    }
};