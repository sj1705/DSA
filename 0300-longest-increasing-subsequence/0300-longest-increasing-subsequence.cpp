class Solution {
public:
    int f(int ind,int prev,vector<int> & nums, int n, vector<vector<int>> &dp)
    {
        if(ind==n) return 0;
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];  
        int  len=0;
        //ntake case
        len=0+f(ind+1,prev,nums,n,dp);

        //take case
        if(prev==-1 || nums[ind]>nums[prev])
        len=max(len,1+f(ind+1,ind,nums,n,dp));
        
        return dp[ind][prev+1]=len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        //memo
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return f(0,-1,nums,n,dp);
    }
};