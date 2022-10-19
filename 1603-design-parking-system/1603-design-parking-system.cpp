class ParkingSystem {
    vector<int>v;
public:
    
    ParkingSystem(int b, int m, int s) {
        v.resize(4);
        v[1]=b;
        v[2]=m;
        v[3]=s;
    }
    
    bool addCar(int c) {
        if(v[c]<1)return false;
        v[c]-=1;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */