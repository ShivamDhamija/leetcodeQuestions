class Solution {
public:
    vector<double> convertTemperature(double c) {        
       double a=c+273.15;
        double b=c*1.8+32;
        return {a,b};
    }
};