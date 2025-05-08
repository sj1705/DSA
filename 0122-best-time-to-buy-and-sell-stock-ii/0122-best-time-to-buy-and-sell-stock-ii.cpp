class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int>(2,0));

        dp[n][0]=dp[n][1]=0;
        int profit=0;
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int j=0;j<=1;j++)
            {
                if(j)
                {
                    profit=max (
                        -arr[ind]+dp[ind+1][0],
                        0+dp[ind+1][1]
                    );
                }
                else
                {
                    profit=max (
                        arr[ind]+dp[ind+1][1],
                        0+dp[ind+1][0]
                    );
                }
                dp[ind][j]=profit;
            }

        }
        return dp[0][1];
    }
};