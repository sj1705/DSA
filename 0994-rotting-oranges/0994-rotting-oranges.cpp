class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int fresh = 0 , afterfresh = 0; 
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> v (n,vector<int>(m,0));

        for(int i  =0;i<n;i++){
            for(int j = 0; j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    v[i][j]=2;
                }
                 if(grid[i][j]==1)
                 fresh++;
            }
        }

        int drow[4] = {-1,0,1,0};
        int dcol[4] = {0,1,0,-1};
        int time = 0; 
        int res = 0; 

        while(q.size()){

            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            res = max(res,t);
            q.pop();
            for(int i = 0; i<4;i++){
                int r = row + drow[i];
                int c = col + dcol[i];
                if(r>=0 && r<n && c>=0 && c<m && grid[r][c]==1 && v[r][c]==0)
                {
                    q.push({{r,c},t+1});
                    v[r][c]=2;
                    afterfresh++;
                }

            }



        }
            if(fresh!=afterfresh)
            return -1;
            return res;

        return res;

        
    }
};