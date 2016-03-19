class Solution {
public:
    int countPrimes(int n) {
        bool *arr = new bool [n];
        for(int i=2;i*i<n;i++){
            if(!arr[i]){
                for(int j=i;i*j<n;j++){
                    arr[i*j] = true;
                }
            }
        }
        int num = 0;
        for(int i=2;i<n;i++){
            if(arr[i]==false)
                num++;
        }
        return num;
    }
};
