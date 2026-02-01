class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int mini1=INT_MAX,mini2=INT_MAX;
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<mini1)
            {
                mini2=mini1;
                mini1=nums[i];
            }
            else if(nums[i]<mini2)
            {
                mini2=nums[i];
            }
        }
        return ans+mini2+mini1;
    }
};