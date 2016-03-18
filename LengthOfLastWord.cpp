class Solution {
public:
    int lengthOfLastWord(string s) {
       int num = 0;
       int previous = 0;
       for(int i=0;i<s.length();i++){
           if(previous == 0&&s[i]!=' '){
               previous = 1;
               num=1;
               cout<<"1"<<endl;
           }else if(previous == 1&&s[i]!=' '){
               num++;
               cout<<"2"<<endl;
           }else if(s[i]==' '){
               previous = 0;
               cout<<"3"<<endl;
           }
       } 
       return num;
    }
};
