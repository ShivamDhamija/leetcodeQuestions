class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& w) {
        vector<int>a;
        vector<int>b;
        int p=-1;
        for(int i=0;i<w.size();i++)
        {
            if(w[i]=="prev")
            {
                if(p==-1)
                    a.push_back(p);
                else
                {
                    a.push_back(b[p]);
                    p--;
                }
            }
            else
            {
                p=b.size();
                b.push_back(stoi(w[i]));
            }
        }
        return a;
    }
};