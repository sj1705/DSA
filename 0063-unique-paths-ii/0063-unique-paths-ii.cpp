class Solution {
public:
    int f(int i, int j, vector<vector<int>> & dp,vector<vector<int>>& arr)
    {if(i>=0&&j>=0&&arr[i][j]==1) return 0;
        if (i==0&&j==0) return 1;
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int left=f(i-1,j,dp,arr);
        int up=f(i,j-1,dp,arr);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(m-1,n-1,dp,obstacleGrid);
    }
};