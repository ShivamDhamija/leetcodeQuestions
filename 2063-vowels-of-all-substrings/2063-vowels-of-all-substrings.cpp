class Solution {
public:
    long long countVowels(string w) {
        long long ans=0;
        for(int i=0;i<w.size();i++)
        {
            if(w[i]=='a'||w[i]=='e'||w[i]=='o'||w[i]=='u'||w[i]=='i')
                ans+=(i+1)*(w.size()-i);
        }
        return ans;
    }
};