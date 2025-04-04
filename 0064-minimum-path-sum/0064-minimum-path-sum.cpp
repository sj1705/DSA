class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int> prev(n);
        for(int i=0; i<m; i++){
            vector<int>curr(n);
            for(int j=0; j<n; j++){
                if(i==0 && j==0){
                    curr[j]=grid[i][j];
                    continue;
                }
                    int up=grid[i][j];
                    if(i>0) up+=prev[j];
                    else up+=1e9;

                    int left=grid[i][j];
                    if(j>0) left+=curr[j-1];
                    else left+=1e9;

                    curr[j]=min(left,up);
            }
            prev=curr;
        }
        return prev[n-1];
    }
};