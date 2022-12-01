int ans=0;
struct Node{
    Node* links[26];
    int ew=0;
    
    bool isThere(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch){
        links[ch-'a']=new Node();
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
};
class Trie{
public:
    Node* root=new Node();
    void insert(string& str){
        Node* node=root;
        for(int i=0;i<str.size();++i){
            if(!node->isThere(str[i]))node->put(str[i]);
            node=node->get(str[i]);
        }
        node->ew++;
        return ;
    }

    int index(string& str, int ind, char ch){
        for(int i=ind;i<str.size();++i)if(str[i]==ch)return i;
        return -1;
    }
    void check(string& str, int ind,Node* cur){
        for(int i=0;i<26;++i){
            char ch='a'+i;
            if(cur->isThere(ch)){
                int idx=index(str,ind,ch);
                if(idx!=-1){
                    Node* node=cur->get(ch);
                    ans+=node->ew;
                    check(str,idx+1,node);
                }                
            }
        }
        return ;
    }
};
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        ans=0;
        Trie trie;
        for(auto& it:words)trie.insert(it);
        trie.check(s,0,trie.root);
        return ans;
    }
};