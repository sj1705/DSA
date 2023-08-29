class Solution {
public:
    void solve(vector <int> nums, vector<int> temp, int index, vector<vector<int>>& ans)
    {
        if(index >= nums.size())
        {
            ans.push_back(temp);
            return ;
        }
        solve(nums, temp, index+1, ans);
        int key = nums[index];
        temp.push_back(key);
        solve( nums, temp, index+1, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector <int> temp;
        solve(nums, temp, 0, ans);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};