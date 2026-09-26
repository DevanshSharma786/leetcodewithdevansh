class Solution {
public:
int ftd(vector<int>&dp,vector<int>&arr,int idx){
    if(idx==arr.size()-1) return arr[idx] ;
    if(idx==arr.size()-2) return max(arr[idx],arr[idx+1])  ;
    if(dp[idx]!=-1) return dp[idx];
    return dp[idx] = max(arr[idx]+ftd(dp,arr,idx+2),0+ftd(dp,arr,idx+1)); 
    
}
    int rob(vector<int>& nums) {
        vector<int>dp(105,-1);
        return ftd(dp,nums,0);
    }
};