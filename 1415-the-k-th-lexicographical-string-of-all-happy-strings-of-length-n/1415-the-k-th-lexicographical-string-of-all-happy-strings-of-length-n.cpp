class Solution {
public:
        void func(int n, string str, string &res, int &k){
        if(str.size() == n){
            k--;
            if(k==0){
                res = str;
            }
            return;
        }
        
        if(k == 0){
            return;
        }
        
        for(int i = 0; i<3;i++){
            if(str.empty()==false and 'a'+i == str.back()){
                continue;
            }
            else{
                str.push_back('a'+i);
                func(n, str, res, k);
                str.pop_back();
            }
        }
    }
    
    string getHappyString(int n, int k) {
        string res = "";
        string str;
        func(n, str,res, k);
        
        return res;
    }
};
