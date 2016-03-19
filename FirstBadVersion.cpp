// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int middle = low+ (high-low)/2;
        while(low+1<high){
            middle = low + (high-low)/2;
            if(isBadVersion(middle)){
                high = middle;
            }
            else 
                low = middle;
        }
        if(isBadVersion(low))
            return low;
        else//(isBadVersion(high))
            return high;
            
       // return -1;
    }
    
};
