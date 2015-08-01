/*
Given a string, find the length of the longest substring without repeating characters. 
For example, the longest substring without repeating letters for "abcabcbb" is "abc", 
which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
*/
/*寻找最长子串问题*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[128]={-1};// 用于记录 比较子串中字符在原始字符串中的位置
        int idx = -1;//用于记录子串的前一个位置的下标
        int result = 0;
        int max = -1;
        memset(arr,-1,128*sizeof(int));
        if(s.length()<=1)     ////重要的一步
            return s.length();
        for (int i=0; i<s.length(); i++) { 
            if(idx<arr[s[i]]){   ///如果s[i]在idx以后出现过 就说明重复了，idx直接跳到s[i]出现的位置
                idx = arr[s[i]];
            }
            else{
                max = max>(i-idx)?max:(i-idx);
            }
            arr[s[i]] = i; //每一次记录最新的s[i]出现的位置
        }
        return max;
    }
    
};
