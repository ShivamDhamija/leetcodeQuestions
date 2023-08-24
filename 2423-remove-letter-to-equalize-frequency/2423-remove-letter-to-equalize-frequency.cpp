class Solution {
public:
    bool equalFrequency(string w) {
        map<int,int>c;
        unordered_map<char,int>m;
        for(auto i:w)        
            m[i]++;            
        for(auto i:m)
            c[i.second]++;
        if(c.size()>2)return false;
        if(c.size()==1)
        {if(m.size()==1||c.begin()->first==1)
                return true;
            else
                return false;}
        auto a=c.begin();
        a++;
        if(c.begin()->first==1&&c.begin()->second==1)return true;
           if(a->first-1==c.begin()->first&&a->second==1)return true;
        return false;
    }
};
// class Solution {
// public:
//     bool equalFrequency(string word) {
//         unordered_map<char, int> mp;
//         map<int, int> mp2;
//         for(auto c: word)  mp[c]++;
        
//         for(auto m: mp)  mp2[m.second]++;
        
        
//         if(mp2.size() > 2) return false;
//         map<int, int>::iterator it1 = mp2.begin();
//         map<int, int>::iterator it2 = mp2.begin();
//         it2++;
        
//         if(mp2.size() == 1){
//             if(mp.size() == 1 || it1->first == 1) return true;
//             return false;
//         }
       
        
//         if(it1->first == 1 && it1->second == 1) return true;
//         if(it1->first == it2->first-1 && it2->second == 1) return true;
//         return false;
//     }
// };