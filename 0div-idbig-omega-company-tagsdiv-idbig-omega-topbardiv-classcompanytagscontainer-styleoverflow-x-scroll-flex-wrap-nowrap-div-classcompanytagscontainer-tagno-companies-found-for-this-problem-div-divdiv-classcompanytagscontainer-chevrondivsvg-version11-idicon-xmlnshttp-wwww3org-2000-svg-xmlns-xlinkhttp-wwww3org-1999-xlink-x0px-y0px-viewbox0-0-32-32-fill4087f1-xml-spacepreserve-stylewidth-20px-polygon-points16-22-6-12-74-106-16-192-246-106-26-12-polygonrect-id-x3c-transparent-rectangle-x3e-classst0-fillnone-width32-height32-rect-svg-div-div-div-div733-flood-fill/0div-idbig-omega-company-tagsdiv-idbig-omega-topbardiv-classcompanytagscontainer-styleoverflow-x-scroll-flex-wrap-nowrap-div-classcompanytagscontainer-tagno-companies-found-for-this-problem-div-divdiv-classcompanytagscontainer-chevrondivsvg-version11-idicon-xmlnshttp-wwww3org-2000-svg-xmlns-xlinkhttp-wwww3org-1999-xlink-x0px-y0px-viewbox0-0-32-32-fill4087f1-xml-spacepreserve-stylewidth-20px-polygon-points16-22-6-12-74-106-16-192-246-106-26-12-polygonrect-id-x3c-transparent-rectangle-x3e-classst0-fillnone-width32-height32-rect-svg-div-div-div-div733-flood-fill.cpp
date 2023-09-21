class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       vector<vector<int>> ans=image;
        int n = image.size();
        int m = image[0].size();

       queue<pair<int,int>> q;
       q.push({sr,sc});
        ans[sr][sc]=color;

        int rows[4]{-1,0,1,0};
        int cols[4]{0,1,0,-1};
        int initialcolor=image[sr][sc];

        while(!q.empty()){
            auto p=q.front();
            q.pop();

            int r=p.first;
            int c=p.second;

            for(int i=0;i<4;i++){
                int nrow=r+rows[i];
                int ncol=c+cols[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]!=color && image[nrow][ncol]==initialcolor){
                    q.push({nrow,ncol});
                    ans[nrow][ncol]=color;
                }
            }
        }
        return ans;
    }
};