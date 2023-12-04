class Solution {
public:
    // checking the frequency vector so that there 
    // are j characters and each character occurs k times..
    bool check(vector<int> & freq, int &j, int &k)
    {
        int ct = 0;
        for(int i = 0; i < freq.size();i++)
        {
            if (freq[i] == 0) continue;
            if (freq[i] != k) return false;
            else ct++;
        }
        if (ct > j) return false;
        return true;
    }
    long long int func(string & s, int &k)
    {
        long long int count = 0;
        int n = s.length();
        for(int j = 1; j <= 26;j++)
        {
            int len = k * j;
            vector<int> freq(26,0);
            if (len > n) break;
            // using sliding window to check each substring of length = len..
            for(int i = 0; i < len;i++)
            {
                freq[s[i] - 'a']++;
            }
            if (check(freq,j,k)) count++;
            for(int i = len;i < n;i++)
            {
                char prev = s[i - len];
                char next = s[i];
                freq[prev - 'a']--;
                freq[next  - 'a']++;
                if (check(freq,j,k)) count++;
            }
        }
        return count;
    }
    int countCompleteSubstrings(string word, int k) {
        long long int  ans = 0;
        string result = "";
        int n = word.length();
        for(int i =0; i < n;i++)
        {
            result += word[i];
            if (i <= n - 2)
            {
                if (abs(word[i] - word[i + 1]) > 2)
                {
                    ans += func(result,k);
                    result = "";
                }
            }
        }
        ans += func(result,k);
        return ans;
    }
};