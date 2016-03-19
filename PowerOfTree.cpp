class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1)
            return false;
        int maxPower = log(INT32_MAX)/log(3);
        int maxVal = pow(3,maxPower);
        return maxVal%n==0;
    }
};
