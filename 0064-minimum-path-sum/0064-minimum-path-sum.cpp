class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int> prev(n);
        for(int i=0; i<m; i++){
            vector<int>temp(n);
            for(int j=0; j<n; j++){
                if(i==0 && j==0){
                    temp[j]=grid[i][j];
                    continue;
                }
                else{
                    int up=grid[i][j];
                    if(i>0) up+=prev[j];
                    else up+=1e9;

                    int left=grid[i][j];
                    if(j>0) left+=temp[j-1];
                    else left+=1e9;

                    temp[j]=min(left,up);
                }
            }
            prev=temp;
        }
        return prev[n-1];
    }
};