class Solution {
public:
    vector<int> decompressRLElist(vector<int>& n) {
        vector<int>a;
        for(int i=0;i<n.size();i+=2){
            while(n[i]--)a.push_back(n[i+1]);
        }
        return a;
    }
};