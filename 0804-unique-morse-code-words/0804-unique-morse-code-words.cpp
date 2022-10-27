class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& w) {
        vector<string>v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>s;
        
        for(auto i:w)
        {
            string t="";
            for(auto j:i)
                t+=v[j-'a'];
            s.insert(t);
        }
        
        return s.size();
    }
};