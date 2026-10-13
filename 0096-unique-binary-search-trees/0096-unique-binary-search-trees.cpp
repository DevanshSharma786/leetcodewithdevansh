
class Solution {
public:
    int dp[30];

    int numTrees(int n) {
        dp[0] = dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            dp[i] = 0;
            for (int k = 1; k <= i; k++) {
                dp[i] = dp[i] + dp[k - 1] * dp[i - k];
            }
        }

        return dp[n];
    }
};
