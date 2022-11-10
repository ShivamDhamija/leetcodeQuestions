class ProductOfNumbers {
public:
    vector<int>v;
    ProductOfNumbers() {
        v={1};
    }
    
    void add(int n) {
        if(n)
            v.push_back(v.back()*n);
        else
            v={1};
    }
    
    int getProduct(int k) {
        return k<v.size()?v.back()/v[v.size()-k-1]:0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */