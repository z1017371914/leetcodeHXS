class Solution {
public:
    int reverse(int x) {
        long long result = 0 ;
        while(x){
            result =10*result + x%10;
            x = x / 10;
        }
        if (result < INT32_MIN) {
            return 0;
        }
        if (result > INT32_MAX) {
            return 0;
        }
        return result;
    }
};
