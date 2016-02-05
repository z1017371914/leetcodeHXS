class Solution {
public:
    int myAtoi(string str) {
        long long result = 0;
        int positive = 1;
        int index=0;//
        while (isspace(str[index])) {
            index++;
        }
        if(str[index]=='+'||str[index]=='-'){
            if (str[index]=='+') {
                positive = 1;
            }else{
                positive = -1;
            }
            index++;
        }
        while (index<str.size()) {
            if (isdigit(str[index])) {
                result = 10*result + str[index]-'0';
                index++;
            }
            else{
                break;
            }
            if(result>INT32_MAX){
                break;
            }
        }
        
        result = result*positive;
        
        if (result<INT32_MIN) {
            return INT32_MIN;
        }
        if(result > INT32_MAX){
            return INT32_MAX;
        }
        return  result;
    }
};
