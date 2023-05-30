class Solution {
public:
    bool isPowerOfThree(int n) {
    if(n<=0)
    return false;
    int x = 32;
    int max_power_of_3 = floor(log2(pow(2,x-1))/log2(3));
    int num = pow(3,max_power_of_3);
        return (n>0&&num%n==0);
    }
};