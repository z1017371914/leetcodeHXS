class Solution {
public:
    
    bool isHappy(int n) {
        map<int,bool> mmp;
        
        while (1) {
            if (n==1) {
                return true;
                break;
            }
            if (mmp.find(n)!=mmp.end()) {
                return false;
            }
            mmp[n]=true;
            
            int sum = 0;
            int temp = n;
            while (temp) {
                sum+= (temp%10) *(temp%10);
                temp /=10;
            }
            n = sum;
        }
    }
    
    
};
