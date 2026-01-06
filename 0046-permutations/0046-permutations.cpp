class Solution {
public:
    void f(int in,vector<vector<int>> &ans, vector<int>& nums) {
        if (in== nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int i = in; i < nums.size(); i++) {
            swap(nums[i],nums[in]);
            f(in+1,ans,nums);
            swap(nums[in],nums[i]);

        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        f(0,ans, nums);
        return ans;
    }
};