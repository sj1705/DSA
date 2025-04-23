class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount + 1, 0));

        // Base case: fill the first row (only using the first coin)
        for (int i = 0; i <= amount; i++) {
            if (i % coins[0] == 0)
                dp[0][i] = i / coins[0];
            else
                dp[0][i] = 1e9; // represent infinity
        }

        // Build the table for all coins and all amounts
        for (int ind = 1; ind < n; ind++) {
            for (int amt = 0; amt <= amount; amt++) {
                int notTake = dp[ind - 1][amt];
                int take = 1e9;
                if (coins[ind] <= amt)
                    take = 1 + dp[ind][amt - coins[ind]];
                dp[ind][amt] = min(take, notTake);
            }
        }

        int ans = dp[n - 1][amount];
        return (ans >= 1e9) ? -1 : ans;
    }
};
