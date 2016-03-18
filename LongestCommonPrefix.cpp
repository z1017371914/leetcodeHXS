class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        if (strs.empty()) {
            return "";
        }
        result = strs[0];
        int j=0;
        for (int i=1; i<strs.size(); i++) {
            for (j=0; j<result.length(); j++) {
                if (result[j]!=strs[i][j]) {
                    break;
                }
            }
            cout<<j<<endl;
            result=result.substr(0,j);
        }
        return result;
    }
    
};
