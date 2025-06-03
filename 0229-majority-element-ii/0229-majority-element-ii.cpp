class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int n = nums.size();
        set<int> ans;

        for(int i = 0; i < n; i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]] > n / 3) {
                ans.insert(nums[i]);
            }
        }

        return vector<int>(ans.begin(), ans.end());
    }
};
