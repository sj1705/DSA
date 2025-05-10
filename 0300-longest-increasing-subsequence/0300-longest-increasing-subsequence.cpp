class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> ahead(n + 1, 0), curr(n + 1, 0);

        for (int ind = n - 1; ind >= 0; ind--) {
            for (int prev = ind - 1; prev >= -1; prev--) {
                int len = ahead[prev + 1];  // not take

                if (prev == -1 || nums[ind] > nums[prev]) {
                    len = max(len, 1 + ahead[ind + 1]);  // take
                }

                curr[prev + 1] = len;
            }
            ahead = curr;  // move current row up
        }

        return ahead[0];
    }
};
