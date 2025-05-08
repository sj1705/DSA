class Solution {
public:
int f(int ind, int buy,vector<int> & arr, int n,  vector<vector<int>> & dp)
{
    if(ind==n)
        return 0;
    if(dp[ind][buy]!=-1) return dp[ind][buy];
    int profit;
    if(buy)
    {
        profit=max (
            -arr[ind]+f(ind+1,0,arr,n,dp),
            0+f(ind+1,1,arr,n,dp)
        );
    }
    else
    {
        profit=max (
            arr[ind] + f(ind+1,1,arr,n,dp),
            0+f(ind+1,0,arr,n,dp)
        );
    }
    return dp[ind][buy]=profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return f(0,1,prices,n,dp);
    }
};