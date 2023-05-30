class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;
        int max_power_of_4 = floor(log2(n)/log2(4));
        return (pow(4, max_power_of_4) == n);
    }
};