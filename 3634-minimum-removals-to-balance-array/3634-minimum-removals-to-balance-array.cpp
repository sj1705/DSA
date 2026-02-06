class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int max_len = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {

            while (nums[right] > (long long)nums[left] * k) {
                left++;
            }
            max_len = max(max_len, right - left + 1);
        }

        return n - max_len;
    }
};