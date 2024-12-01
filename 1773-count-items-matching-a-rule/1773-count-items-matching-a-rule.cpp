class Solution {
public:
    int countMatches(vector<vector<string>>& n, string k, string r) {
        int a=0;
        for(int i=0;i<n.size();i++){
            if(k=="type"&&n[i][0]==r)a++;
            else if(k=="color"&&n[i][1]==r)a++;
            else if(k=="name"&&n[i][2]==r)a++;
        }
        return a;
    }
};