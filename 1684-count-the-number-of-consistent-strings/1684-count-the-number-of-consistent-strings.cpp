#include<bits/stdc++.h>
    class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w) {
        int count=0;
        unordered_set<char>c;
        for(int i=0;i<a.size();i++)
            c.insert(a[i]);
        for(auto i:w)
        {
            int r=1;
            for(int b=0;b<i.length();b++)
                if(c.find(i[b])==c.end())
                {
                    r=0;
                    break;
                }
            if(r==1)
                count++;
        }
        return count;
    }
};