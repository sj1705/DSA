class Solution {
public:
    int f(int  n, vector <int> & dp)
    {
        if(n==0||n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        int left=f(n-1,dp);
        int  right=f(n-2,dp);
        return dp[n]=right+left;
    }
    int climbStairs(int n) {
        vector <int> dp(n+1,-1);
        return f(n,dp);
    }
};