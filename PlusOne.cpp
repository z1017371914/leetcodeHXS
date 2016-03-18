class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int pri = 1;
        for(int i=digits.size()-1;i>=0;i--){
            int sum = digits[i]+pri;
            if(sum>=10){
                pri = 1;
                sum = sum % 10;
            }else{
                pri = 0;
            }
            digits[i] = sum;
        }
        if(pri==1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
