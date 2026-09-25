class Solution {
public:
int  path(vector<vector<int>>&grid,vector<vector<int>>&dp,int sr,int sc, int n ,int m){
    if(sr==n|| sc==m) return INT_MAX ;
    if(dp[sr][sc]!=-1) return dp[sr][sc] ;
if(sr==n-1 && sc==m-1) return grid[n-1][m-1];
dp[sr][sc]= grid[sr][sc]+ min(path(grid,dp,sr+1,sc,n,m) ,path(grid,dp,sr,sc+1,n,m));
return dp[sr][sc] ;
}
    int minPathSum(vector<vector<int>>& grid) {
        int sum = 0 ;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        sum = path( grid ,dp ,0,0,n,m);
        return sum ; 
    }
};