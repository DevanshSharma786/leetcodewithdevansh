class Solution {
public:
    int f(vector<int>& nums, vector<vector<int>>& dp, int i, int on) {

        if(i == nums.size())
            return 0;

        if(dp[i][on] != -1)
            return dp[i][on];

        int ans = INT_MIN;

        // Don't do anything today
        ans = f(nums, dp, i + 1, on);

        if(on) {
            // Sell today
            ans = max(ans, nums[i]);
        }
        else {
            // Buy today
            ans = max(ans, f(nums, dp, i + 1, 1) - nums[i]);
        }

        dp[i][on] = ans;

        return dp[i][on];
    }

    int maxProfit(vector<int>& prices) {

        vector<vector<int>> dp(prices.size(), vector<int>(2, -1));

        return f(prices, dp, 0, 0);
    }
};