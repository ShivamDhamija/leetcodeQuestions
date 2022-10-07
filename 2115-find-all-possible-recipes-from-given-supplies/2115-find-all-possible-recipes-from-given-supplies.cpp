class Solution {
    // all the supplies we have
    unordered_set<string> _s;
    // the map of recipes to ingredients
    unordered_map<string, vector<string>> _m;
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        
        int n = recipes.size();
        // build the map
        for(int i=0;i<n;++i) {
            _m[recipes[i]] = ingredients[i];
        }
        for(auto s:supplies) _s.insert(s);
        
        // coloring  
        unordered_map<string,int> v;
        vector<string> res;
        
        for(auto r:recipes) {    
            if(dfs(r, v)) {
                res.push_back(r);
                
            }
        }
        return res;
    }
    
    
    bool dfs(string cur, unordered_map<string,int>& v) {
        if (v[cur] == 1) return false; // there's a cycle
        if (v[cur] == 2) return true;  // this is visited already
        // if it's a leave node, check if it's in the supplies
        if (_m[cur].empty()) 
            return _s.count(cur);
        
        v[cur] = 1;
        for(auto nextNode: _m[cur]) {
            if(!dfs(nextNode, v)) return false;
        }
        v[cur] = 2;

        return true;
    }
};