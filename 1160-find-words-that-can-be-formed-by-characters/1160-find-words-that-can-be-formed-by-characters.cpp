class Solution {
public:
    int countCharacters(vector<string>& w, string c) {
         vector<int>v(26);
        for(auto i:c)
            v[i-'a']++;
        int ans=0;
        
        for(auto i:w)
        {
            vector<int>a(26);
            for(auto j:i)
                a[j-'a']++;
            int c=i.size();
            
            for(int j=0;j<26;j++)
                if(a[j]>v[j])c=0;
            
            ans+=c;
        }
        
        return ans;
    }
};