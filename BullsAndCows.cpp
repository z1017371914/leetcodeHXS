class Solution {
public:
    string getHint(string secret, string guess) {
        int arrA[10]={0};
        int arrB[10]={0};
        char result[5];
        int A = 0;
        int B = 0;
        string As;
        string Bs;
       
        memset(arrA, 0, 10*sizeof(int));
        memset(arrB, 0, 10*sizeof(int));
        for (int i=0; i<secret.length(); i++) {
            arrA[secret[i]-'0'] ++;
            arrB[guess[i]-'0'] ++;
            if(secret[i]==guess[i]){
                A++;
            }
        }
        for (int i=0; i<10; i++) {
            B+=min(arrA[i],arrB[i]);
        }
        B-=A;
        sprintf(result,"%d%s%d%s",A,"A",B,"B");
        
        return result;
    }
};
