class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);  // Initialize ans with -1 by default
        
        // Iterate over each element in nums
        for (int i = 0; i < nums.size(); i++) {
            // Check from ans = 0 upwards to find the minimum valid ans
            for (int candidate = 0; candidate <= nums[i]; candidate++) {
                if ((candidate | (candidate + 1)) == nums[i]) {
                    ans[i] = candidate;  // Set the valid candidate
                    break;  // No need to check further
                }
            }
        }
        
        return ans;
    }
};