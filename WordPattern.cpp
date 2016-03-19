class Solution {
public:
    bool wordPattern(string pattern, string str) {
        std::vector<std::string> str_list; // 存放分割后的字符串
        istringstream is(str);
        string temp;
        map<char,string> map1;
        map<string,char> map2;
        while (is>>temp) {
            str_list.push_back(temp);
        }
        if (str_list.size()!=pattern.size()) {
            return false;
        }
        for (int i=0; i<pattern.size(); i++) {
            if(map1.find(pattern[i])==map1.end()){
                map1[pattern[i]] = str_list[i];
            }else {
                if (map1[pattern[i]]!= str_list[i]) {
                    return false;
                }
            }
            
            if(map2.find(str_list[i])==map2.end()){
                map2[str_list[i]] = pattern[i];
            }else {
                if (map2[str_list[i]]!= pattern[i]) {
                    return false;
                }
            }
        }
    }
};

