class Solution {
public:
    int hammingWeight(uint32_t n) {
        int number = 0;
        while(n){
            number++;
            n=n&(n-1);
        }
        return number;
    }
};
