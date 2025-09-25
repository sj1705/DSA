class Solution {
public:
    int f(int i, int j, vector<vector<int>>& triangle,int n,vector<vector<int>>& dp)
    {
        if(i==n-1) return triangle[n-1][j];
        if(dp[i][j]!=-1) return dp[i][j];
        
        int d=triangle[i][j] + f(i+1,j, triangle,n,dp);
        int g=triangle[i][j] + f(i+1,j+1,triangle, n,dp);
        
        return dp[i][j]=min(d,g);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        for(int i=0;i<n;i++) dp[n-1][i] = triangle[n-1][i];
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
            {
                int d= triangle[i][j] + dp[i+1][j];
                int g=triangle[i][j] + dp[i+1][j+1];
                dp[i][j]=min(d,g);
            }
        }
        return dp[0][0];
        
        
    }
};