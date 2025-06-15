class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int closedsum = nums[0] + nums[1] + nums[2]; // initialize safely

        for (int k = 0; k < n - 2; ++k) {
            int l = k + 1;
            int r = n - 1;

            while (l < r) {
                int sum = nums[k] + nums[l] + nums[r];

                // Update if closer to target
                if (abs(target - sum) < abs(target - closedsum)) {
                    closedsum = sum;
                }

                if (sum < target) {
                    ++l;
                } else {
                    --r;
                }
            }
        }

        return closedsum;
    }
};
