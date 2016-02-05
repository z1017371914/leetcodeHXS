class Solution {
public:
    bool isPalindrome(int x) {
        long long result = 0;
        int temp  =x;
        if(x<0)
        return false;
        while (x) {
            result = 10 * result + x%10;
            x/=10;
        }
        if(result>INT32_MAX)
            return false;
        return  temp==result;
    }
};
