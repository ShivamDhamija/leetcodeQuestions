class Solution {
public:
    bool check(string a,string b)
    {
        int i=0,j=b.size()-1;
       // if(j==0)return true;
        while(i<j&&a[i]==b[j]&&j>=0)
        {
            i++;j--;
        }
        if(j<=i)return true;
        int I=i,J=j;
        while(I<J&&a[I]==a[J])
        {
            I++;
            J--;
        }
        if(I>=J)return true;
        I=i,J=j;
        while(I<J&&b[I]==b[J])
        {
            I++;
            J--;
        }
        if(I>=J)return true;
        return false;
    }
    bool checkPalindromeFormation(string a, string b) {
        if(check(a,b))return true;
        if(check(b,a))return true;
        return false;
    }
};