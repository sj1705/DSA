class Solution {
public:
    void f(vector <int> &ds,vector <int> & nums,vector <vector<int>> &ans,vector<int> &map)
    {
        if(ds.size()>=nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!map[i])
            {
                ds.push_back(nums[i]);
                map[i]=1;
                f(ds,nums,ans,map);
                map[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector <vector<int>> ans;
        vector <int> ds;
        int size=nums.size();
        vector<int> map(nums.size(),0);
        f(ds,nums,ans,map);
        return ans;
    }
};