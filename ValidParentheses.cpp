class Solution {
public:
    bool isValid(string s) {
        stack<char> ss;
        for (int i=0; i<s.size(); i++) {
            if (s[i]=='{'||s[i]=='('||s[i]=='[') {
                ss.push(s[i]);
            }
            else if (s[i]==')'&&!ss.empty()&&ss.top()=='(') {
                ss.pop();
            }
            else if (s[i]=='}'&&!ss.empty()&&ss.top()=='{') {
                ss.pop();
            }
            else if (s[i]==']'&&!ss.empty()&&ss.top()=='[') {
                ss.pop();
            }
            else
                return false;
        }
        if (ss.empty()) {
            return true;
        }
        return false;
    }
    
};;
