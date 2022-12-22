class Solution {
public:
    /*
    1=>If n is even, we increase the number of even subarrays; the number of odd subarrays does not change.
    2=>If n is odd, the number of odd subarrays is the previous number of even subarrays + 1. The number of even             subarrays is the previous number of odd subarrays.
    */
    int numOfSubarrays(vector<int>& arr) {
    int odd = 0, even = 0, sum = 0;
    for (int n : arr) {
        if (n % 2) {
            swap(odd, even);
            ++odd;
        }
        else
            ++even;
        sum = (sum + odd) % 1000000007;
    }
    return sum;
}
};