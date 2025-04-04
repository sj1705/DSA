class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> prev(m);
       prev[0]=grid[0][0];
        for(int i=0;i<n;i++)
        {
            vector<int> curr(m);
            for(int j=0;j<m;j++)
            {
                if(i==0&&j==0) {curr[j]=grid[i][j]; continue;}
                int left = grid[i][j] + (i > 0 ? prev[j] : 1e9);
                int up = grid[i][j] + (j > 0 ? curr[j - 1] : 1e9);
                curr[j]=min(left,up);
            }
            prev=curr;
        }
        return prev[m-1];
    }
};