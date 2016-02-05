class Solution {
public:
    //思想 1.判断p的第二个字符是否是*,如果不是* 递归判断s+1 与 p+1
    //2.如果是* 如果s与p的第一个字符不相等，则判断 s月p+2
      // 如果第一个数相等也要分两种情况(1)*算0次 则判断s与 p+2    (2) 判断s后面的子串与p 直到 s第一个字符与p的第一个字符不相等
    bool isMatch(string s, string p) {
        if(s.size()==0)
            return (p.size()==0||(p.size()>1&&p[1]=='*'&&isMatch(s,p.substr(2))));
        if (p.size()==0) {
            return s.size()==0;
        }
        //当p的长度为1时
        if (p.size()==1) {
            return p==s||(p=="."&&s.size()==1);
            
            return false;
        }
        //当p的长度不为1时
        if(p[1]!='*'){
            if (s[0]==p[0]||p[0]=='.') {
                return isMatch(s.substr(1), p.substr(1));
            }
            return  false;
            
        }
        else{
            //1 .如果第一个字符不相等
            if (s[0]!=p[0]&&p[0]!='.') {
                return isMatch(s,p.substr(2));
            }
            //2.如果第一个字符相等且p第二个字符是*
            while (s.size()>0&&(s[0]==p[0]||p[0]=='.')) {
                ///出现了0次
                if (isMatch(s, p.substr(2))) {
                    return true;
                }
                //s后面的截取然后递归
                s=s.substr(1);
            }
                return isMatch(s, p.substr(2));
            
            
        }
        
    }
};
