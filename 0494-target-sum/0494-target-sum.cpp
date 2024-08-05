class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return solve(n-1,nums,target);
    }

    int solve(int index, vector<int> &nums,int target)
    {
        if(index == 0)
        {
            if(index==0){
        if(target==0&&nums[0]==0)
            return 2;
        return (nums[0]==abs(target));
             }
        }
        int plus =  solve(index-1,nums,target - nums[index]); 
        int minimus =  solve(index-1,nums,target + nums[index]);

        return ( plus + minimus);
    }
};