class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<=1)
            return true;
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        int start = 0;
        int end = s.length()-1;
        while(start<end){
            while(!(s[start]>='a'&&s[start]<='z'||s[start]>='0'&&s[start]<='9')&&start<s.length())
                start++;
            while(!(s[end]>='a'&&s[end]<='z'||s[end]>='0'&&s[end]<='9')&&end>=0)
                end--;  
            if(start>end)
                break;
            if(s[start]!=s[end])
                return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};
