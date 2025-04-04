class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        dp[0][0]=1;

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int left,up;
                if(i==0&&j==0) continue;
                if(i>0) left=dp[i-1][j];
                else left =0;
                if(j>0) up=dp[i][j-1];
                else up=0;
                dp[i][j]=left+up;
            }
        }
        return dp[m-1][n-1];
    }
};