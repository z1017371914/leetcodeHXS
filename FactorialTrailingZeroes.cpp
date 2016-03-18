class Solution {
public:
  ///分析 要想是0，得2*5出现，所以求阶乘中5的指数，n/k代表【1-n】中能被k整除的个数
  /// 计算5的个数时, 最简单的方法是 SUM(N/5^1,  N/5^2, N/5^3...)  比如说25 能提供两个
    int trailingZeroes(int n) {
        int num = 0;
        while(n){
            n/=5;
            num += n ;
        }
        return num;
    }
};
