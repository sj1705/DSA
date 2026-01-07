class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini=nums[0];
        int maxProfit=0;
        for(int i=1;i<nums.size();i++)
        {
            int profit=nums[i]-mini;
            maxProfit=max(maxProfit,profit);
            mini=min(mini,nums[i]);
        }
        return maxProfit;
    }
};