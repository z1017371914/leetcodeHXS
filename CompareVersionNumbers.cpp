class Solution {
public:
    int compareVersion(string version1, string version2) {
        cout<<version1<<" "<<version2<<endl;
        int res1 = 0,res2 = 0;
        int position1 = 0,position2 = 0;
        if(version1.empty()&&version2.empty()){
            return 0;
        }
        if(version1.empty()){
            res1 = 0;
        }else{
             position1 = version1.find('.');
            if(position1 == string::npos){
                position1 = version1.length();
            }
            res1 = atoi(version1.substr(0,position1).c_str());
        }
        if(version2.empty()){
            res2 = 0;
        }else{
             position2 = version2.find('.');
            if(position2 == string::npos){
                position2 = version2.length();
            }
            res2 = atoi(version2.substr(0,position2).c_str());
        }
        if(res1<res2)
            return -1;
        else if(res1>res2)
            return 1;
        else 
            return compareVersion(position1==version1.length()?"":version1.substr(position1+1),position2==version2.length()?"":version2.substr(position2+1));
    }
};
