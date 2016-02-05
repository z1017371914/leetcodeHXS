class Solution {
public:
    int romanToInt(string s) {
        if(s.size()==0)
            return 0;
        int res = 0;
        res+=toNumber(s[0]);
        for (int i=1; i<s.size(); i++) {
            if(toNumber(s[i-1])<toNumber(s[i]))
            res= res + toNumber(s[i])-2*toNumber(s[i-1]);
            else
            res+=toNumber(s[i]);
        }
        return res;
    }
    int toNumber(char ch) {
        switch (ch) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
};
