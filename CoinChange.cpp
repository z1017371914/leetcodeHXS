class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int *dp =new int[amount+1];
        memset(dp, -1, sizeof(int)*(amount+1));
        dp[0]=0;
        for (int i=1; i<=amount; i++) {
            for (int j=0; j<coins.size(); j++) {
                if (coins[j]<=i) {
                    if(dp[i-coins[j]]!=-1){
                        dp[i] = min(dp[i],dp[i-coins[j]]+1);
                        if(dp[i]==-1)
                            dp[i]=dp[i-coins[j]]+1;
                    }
                }
            }
          //  cout<<dp[i]<<endl;
        }
        
        return dp[amount];
    }
    
    
};
