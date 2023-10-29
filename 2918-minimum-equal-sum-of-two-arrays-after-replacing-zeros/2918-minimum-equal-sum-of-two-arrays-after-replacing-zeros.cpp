class Solution {
public:
    long long minSum(vector<int>& n1, vector<int>& n2) {
     long long s1=0,s2=0,c1=0,c2=0;
        for(auto i:n1)
            if(i==0)s1++,c1++;
            else s1+=i;
        for(auto i:n2)
            if(i==0)s2++,c2++;
            else s2+=i;
        //cout<<s1<<" "<<s2;
        if(s1==s2)return s1;
        if(c1==0||c2==0){
            if(c1==0&&s2<s1&&c2!=0)return s1;
            else if(c2==0&&s1<s2&&c1!=0)return s2;
            return -1;
        }
        return max(s1,s2);
    }
};