class Solution {
public:
    void help(string &s,int i,int j,int &I,int &J){
        while(i>=0&&j<s.size()){
                if(s[i]==s[j]){
                    if(j-i+1>J){
                    I=i;
                    J=j-i+1;}
                    i--;
                    j++;
                }else break;
            }
    }
    string longestPalindrome(string s) {
        int I=0,J=0,i,j; 
        for(int k=0;k<s.size();k++)
        {
            help(s,k,k,I,J);
            help(s,k,k+1,I,J);                  
        }
        return s.substr(I,J);
    }
};