class Solution {
public:
    void dfs(int row,int col, vector<vector<int>>& image, vector<vector<int>>& ans, int icolor,int ncolor,int drow[],int dcol[])
    {
        ans[row][col]=ncolor;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++)
        {
            int nrow=row+drow[i];
            int ncol=col+dcol[i];
            if (nrow>=0 && nrow<n && ncol >=0&& ncol <m && image[nrow][ncol]==icolor && ans[nrow][ncol] !=ncolor)
            {
                dfs(nrow,ncol,image,ans,icolor,ncolor,drow,dcol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int icolor=image[sr][sc];
        vector <vector<int>> ans=image;
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        dfs(sr,sc,image,ans,icolor,color,drow,dcol);
        return ans;
    }
};