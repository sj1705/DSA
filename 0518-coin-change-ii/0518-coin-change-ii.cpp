class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<long long> prev(amount + 1, 0), curr(amount + 1, 0);

        for (int t = 0; t <= amount; ++t) {
            if (t % coins[0] == 0)
                prev[t] = 1;
        }

        for (int i = 1; i < n; ++i) {
            for (int t = 0; t <= amount; ++t) {
                long long noPick = prev[t];
                long long pick = 0;
                if (coins[i] <= t)
                    pick = curr[t - coins[i]];

                curr[t] = pick + noPick;
            }
            prev = curr;
        }

        return static_cast<int>(prev[amount]); // safe cast, final answer will be in int range
    }
};
