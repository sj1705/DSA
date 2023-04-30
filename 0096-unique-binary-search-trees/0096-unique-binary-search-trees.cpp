class Solution {
public:
    vector<vector<int>> dp;
    int solve(int i,int j)
    {
        if(i>j) return 1;
        if(i==j) return dp[i][j]=1;
        
        if(dp[i][j]!=-1) return dp[i][j];
        int sum=0;
        for(int k=i;k<=j;k++)
        {
            if(dp[i][k-1]==-1)
            dp[i][k-1]=solve(i,k-1);
            if(dp[k+1][j]==-1)
            dp[k+1][j]=solve(k+1,j);
            sum+=dp[i][k-1]* dp[k+1][j];
        }
        return dp[i][j]=sum;
    }
    int numTrees(int n) 
    {
        dp.resize(22,vector<int>(22,-1));
         solve(1,n);
        return dp[1][n];
    }
};