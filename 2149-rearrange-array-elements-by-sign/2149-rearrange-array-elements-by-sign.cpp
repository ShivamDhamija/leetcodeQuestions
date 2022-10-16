class Solution {
public:
    vector<int> rearrangeArray(vector<int>& n) {
        vector<int>a;
        vector<int>b;
        for(auto i:n)
        {
            if(i<0)
                a.push_back(i);
            else
                b.push_back(i);
        }
        int j=0;
        for(int i=0;i<a.size();i++)
        {
            n[j]=b[i];
            j++;
            n[j]=a[i];
            j++;
            
        }
        return n;
    }
};