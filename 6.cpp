class Solution {
public:
    string convert(string s, int numRows) {
        string result = "";
        string *arr = new string[numRows];
        int length = s.length();
        if (length<=1||numRows<=1) {
            return  s;
        }
        int index = 0;
        int delta = 1;
        for(int i=0;i<s.size();i++){
            arr[index] += s[i];
            if(index==numRows-1)
                delta = -1;
            if(index==0)
                delta = 1;
            index +=delta;
        }
        for(int i=0;i<numRows;i++)
            result+=arr[i];
        return result;
    }
};
