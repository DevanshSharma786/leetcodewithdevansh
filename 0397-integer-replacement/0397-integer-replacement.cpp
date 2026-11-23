class Solution {
public:
unordered_map<long long , int >dp ; 
int solveit(long long  n ){
    if(n==1) return 0 ;
    if(dp.find(n)!=dp.end()){
        return dp[n] ;
    }
    if(n%2==0){
        dp[n] = 1 + solveit(n/2);
    }
    else{
        dp[n] = 1 + min(solveit(n+1),solveit(n-1));
    }
    return dp[n] ;


}
    int integerReplacement(int n) {
        return solveit(n) ;
    }
};