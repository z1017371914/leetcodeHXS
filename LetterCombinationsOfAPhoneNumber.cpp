class Solution {
public:
    string arr[8]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string s;
        if(digits.size()<=0)
            return result;
        findString(result,s, digits);
        return result;
    }
    void findString(vector<string> &result,string s,string digits){
        if (digits.size()==s.size()) {
            result.push_back(s);
        }
        else{
            char digit = digits[s.size()];
            string temp = arr[digit-'0'-2] ;
            for (int i=0; i<temp.size(); i++) {
                findString(result,s+temp[i], digits);
            }
        }
        
    }
    
};
