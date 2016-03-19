class Solution {
public:
    int addDigits(int num) {
        int result =0;
        int temp =0;
        while(num/10!=0){
            result =0;
            temp = num;
            while (temp) {
                result += temp%10;
                temp/=10;
            }
            num = result;
        }
        return num;
    }
    
};
