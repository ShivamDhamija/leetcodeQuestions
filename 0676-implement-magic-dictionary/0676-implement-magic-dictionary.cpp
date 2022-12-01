class MagicDictionary {
public:
    unordered_set<string>s;
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> d) {
        for(auto i:d)
            s.insert(i);
    }
    
    bool search(string st) {
        //if(s.find(st)!=s.end())return true;
        for(int i=0;i<st.size();i++)
        {
            int k=st[i]-'a';
            for(int j=0;j<26;j++)
            {
                if(k==j)continue;
                st[i]='a'+j;
                if(s.find(st)!=s.end())return true;
            }
            st[i]='a'+k;
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */