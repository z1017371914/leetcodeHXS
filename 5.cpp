class Solution {
public:
    string longestPalindrome(string s) {
        int length = s.size();
        bool flags[1000][1000] = {false};
        int startPoint = 0;
        int maxLen = 1;
        for (int i=0; i<length; i++) {
            flags[i][i] = true;
        }
        for (int i=0; i<length-1; i++) {
            if (s[i]==s[i+1]) {
                flags[i][i+1]=true;
                startPoint = i;
                maxLen = 2;
            }
        }
        for (int len = 3; len<=s.size(); len++) {
            for (int i=0; i<length-len+1; i++) {
                int j = i+ len -1;
                if (s[i]==s[j]&&flags[i+1][j-1]==true) {
                    flags[i][j] = true;
                    startPoint = i;
                    maxLen = len;
                }
            }
        }
        return s.substr(startPoint,maxLen);
    }
    
};
