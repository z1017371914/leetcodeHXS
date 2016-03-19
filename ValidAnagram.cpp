class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[128]={0};
        memset(arr,0,128*sizeof(int));
        for(int i=0;i<s.length();i++){
            arr[s[i]]++;
        }
         for(int i=0;i<t.length();i++){
            arr[t[i]]--;
        }
        for(int i=0;i<128;i++){
            if(arr[i]!=0)
                return false;
        }
        return true;
    }
};
