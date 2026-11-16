class Solution {
public:
vector<int>dp ;
int fibo(int n ){
    if(n==0||n==1){
        return 1 ;
    }
    if(n==2)return 2 ;
    if(dp[n]!=-1){
        return dp[n];
    }
   dp[n]=fibo(n-1)+fibo(n-2) ;
    return dp[n];
}
    int climbStairs(int n) {
        dp.resize(50 , -1) ;
        int ways = fibo(n);
                return ways ;
    }
};