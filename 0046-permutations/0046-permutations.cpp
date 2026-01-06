class Solution {
public:
    void f(vector<vector<int>> &ans, vector<int>& nums, vector<int>& ds, vector<int> &freq) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                ds.push_back(nums[i]);
                freq[i] = 1;
                f(ans, nums, ds, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        vector<int> freq(n, 0);
        f(ans, nums, ds, freq);
        return ans;
    }
};