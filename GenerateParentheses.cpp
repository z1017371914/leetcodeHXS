class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> arr;
        string s="";
        generate(s,n,n,arr);
        return arr;
    }
    ///left和right记录的是剩余的左右括号数
    void generate(string s,int left,int right,vector<string> &arr){
        if (left==0&&right==0) {
            arr.push_back(s);
        }
        if (left>0) {
            generate(s+'(',left-1,right,arr);
        }
        if (right>0&&left<right) { 
            generate(s+')',left, right-1, arr);
        }
        
    }
    
};
