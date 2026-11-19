class Solution {
public:
vector<int>dp ;
int tibo(int n ){
if(n>=0){
    dp[0] = 0 ;
}
if(n>=1){
    dp[1]=1 ;
}
if(n>=2){
    dp[2]= 1 ;   
}
for(int i=3;i<=n;i++){
dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
}
return dp[n];
}
    int tribonacci(int n) {
        dp.resize(40 , -1);
        int ans = tibo(n) ;
        return ans ;
    }
};