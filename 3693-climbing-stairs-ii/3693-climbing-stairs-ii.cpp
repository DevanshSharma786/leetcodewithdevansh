class Solution {
public:
vector<int>dp ;
    int climbStairs(int n, vector<int>& costs) {
        dp.resize(n+1,INT_MAX) ;
        dp[0] = 0  ;

        for(int i =1 ;i<=n;i++){
        if(i>=1){
            dp[i] =min(dp[i], costs[i-1]+dp[i-1] + 1 );
        }
        if(i>=2){
            dp[i] = min(dp[i],costs[i-1]+dp[i-2] + 4 );
        }
        if(i>=3){
            dp[i] =min(dp[i],costs[i-1]+dp[i-3] + 9 ); 
        }
        }
        return dp[n];
    }
};