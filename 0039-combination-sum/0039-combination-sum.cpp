class Solution {
public:
    void f(int ind,vector<int> & temp, vector<vector<int>>& ans, vector<int>& nums , int target)
    {
        if(ind==nums.size())
        {
            if(target==0)
            {
                ans.push_back(temp);
            }
            return;
        }
        if(nums[ind]<=target)
        {
            temp.push_back(nums[ind]);
            f(ind,temp,ans,nums,target-nums[ind]);
            temp.pop_back();
        }
            f(ind+1,temp,ans,nums,target);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        f(0,temp,ans,nums,target);
        return ans;
    }
};