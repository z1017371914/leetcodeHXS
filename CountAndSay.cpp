class Solution {
public:
 
string countAndSay2(string n) {
    if(n=="0")
        return "1";
    string s = n;
    int pre = -2;
    int count = 0;
    string res="";
    for(int i=0;i<s.length();i++){
        if(pre==(s[i]-'0')){
            count++;
        }else{
            if(pre == -2){
                count=1;
                pre = s[i]-'0';
            }else{
                res = res+ to_string(count)+to_string(pre);
                pre = s[i]-'0';
                count=1;
            }
        }
    }
    res = res+ to_string(count)+to_string(pre);
    
    return res;
}
    string countAndSay(int n){
        string temp ="0";
        for(int i=0;i<n;i++){
             
             temp=countAndSay2(temp);
             
        }
        return temp;
    }
};
