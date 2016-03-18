class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()==0)
            return 0;
        if(needle.length()>haystack.length())
            return -1;
        int *N = Next(needle);
        int i=0,j=0;
        for(i=0;i<haystack.length();i++){
            while(j>0&&needle[j]!=haystack[i])
                j=N[j-1];
            if(needle[j]==haystack[i])j++;
            
            if(j==needle.length()) return (i-j+1);
            
        }
        return -1;
        
    }
   int * Next(string p){
    int m = p.length();
    int *N = new int[m];
    N[0] = 0;
    for (int i=1; i<m; i++) {
        int k = N[i-1];
        while(k>0&&p[i]!=p[k]){ ///精髓
            k= N[k-1];
        }
        if (p[i] == p[k]) {
            N[i] = k+1;
        }
        else{
            N[i] = 0;
        }
    }
    return N;
}
};
