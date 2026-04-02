class Solution {
    long long INF = 1e17;

public:
    long long solve(int i, int j, int k, vector<vector<int>>& coins, vector<vector<vector<long long>>>& memo) {
        if (i >= coins.size() || j >= coins[0].size()) return -INF;

        if (i == coins.size() - 1 && j == coins[0].size() - 1) {
            if (coins[i][j] < 0 && k > 0) return 0;
            return coins[i][j];
        }

        if (memo[i][j][k] != -INF) return memo[i][j][k];

        long long takeHit = coins[i][j] + max(solve(i + 1, j, k, coins, memo), solve(i, j + 1, k, coins, memo));
        
        long long neutralize = -INF;
        if (coins[i][j] < 0 && k > 0) {
            neutralize = 0 + max(solve(i + 1, j, k - 1, coins, memo), solve(i, j + 1, k - 1, coins, memo));
        }

        return memo[i][j][k] = max(takeHit, neutralize);
    }

    int maximumAmount(vector<vector<int>>& coins) {
        int m = coins.size(), n = coins[0].size();
        vector<vector<vector<long long>>> memo(m, vector<vector<long long>>(n, vector<long long>(3, -1e17)));
        return (int)solve(0, 0, 2, coins, memo);
    }
};