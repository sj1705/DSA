class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        // Loop backwards from the last index
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int prev = ind - 1; prev >= -1; prev--) {
                int len = dp[ind + 1][prev + 1];  // not take

                if (prev == -1 || nums[ind] > nums[prev]) {
                    len = max(len, 1 + dp[ind + 1][ind + 1]);  // take
                }

                dp[ind][prev + 1] = len;
            }
        }

        return dp[0][0];
    }
};
