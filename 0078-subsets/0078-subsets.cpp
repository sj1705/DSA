class Solution {
public:
    void f(int ind,vector<int> & temp, vector<vector<int>>& ans, vector<int>& nums )
    {
        ans.push_back(temp);
        if(ind==nums.size())
            return;
        for(int i=ind;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            f(i+1,temp,ans,nums);
            temp.pop_back();
            while(i+1<nums.size()&&nums[ind]==nums[i+1])
                i++;
        }
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        f(0,temp,ans,nums);
        return ans;
    }
};