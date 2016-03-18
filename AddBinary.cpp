class Solution {
public:
    string addBinary(string a, string b) {
       int lengthA = a.length();
       int lengthB = b.length();
       int pri = 0;
       if(lengthA<lengthB){
           string temp(lengthB-lengthA,'0');
           a = temp + a;
       }else if(lengthB<lengthA){
           string temp(lengthA-lengthB,'0');
           b = temp + b;
       }
       for(int i=a.length()-1;i>=0;i--){
           int sum  = a[i] + b[i] - '0' - '0' + pri;
           cout<<sum<<endl;
           if(sum>=2){
               pri = 1;
               sum = sum % 2;
           }else{
               pri = 0;
           }
           a[i] = sum+'0';
       }
       if(pri == 1)
        a = "1"+a;
    
        return a;
        
    }
};
