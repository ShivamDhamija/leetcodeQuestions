class Trie {
    struct Node {
        Node*link [26];
        
        bool end=false;
     
        bool contains(char c)
        {
            return link[c-'a']!=NULL;
        }
        
        void creat(char c,Node *val)
        {
            link[c-'a']=val;
        }
        
        Node* get(char c)
        {
            return link[c-'a'];
        }
        
        void setEnd()
        {
            end=true;
        }
        bool isEnd()
        {
            return end;
        }
    };
     Node *root;
public:
   
    Trie() {
        root=new Node();
    }
    
    void insert(string word) {
        
        Node *node=root;
        for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))
            {
               node->creat(word[i],new Node()); 
            }
            node=node->get(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node*node=root;
        
        for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))return false;
            
             node=node->get(word[i]);
        }
        
        return node->isEnd();
    }
    
    bool startsWith(string word) {
        Node*node=root;
        
        for(int i=0;i<word.size();i++)
        {
            if(!node->contains(word[i]))return false;
            
             node=node->get(word[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */