class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len = nums.size();
        vector<int> cnt(len+1);
        for (int i = 0; i < len; i++) {
            cnt[nums[i]]++;
            if (cnt[nums[i]] > 1) {
                return nums[i];
            }
        }
        return len;
    }
};