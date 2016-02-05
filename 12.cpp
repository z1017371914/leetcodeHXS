class Solution {
public:
    string intToRoman(int num){
        string roman[4][10] = {
            {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
            {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
            {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
            {"", "M", "MM", "MMM"}
        };
        string res;
        int i=0;
        while (num) {
            res = roman[i][num%10]+res;
            i++;
            num/=10;
        }
        return res;
    }
};
