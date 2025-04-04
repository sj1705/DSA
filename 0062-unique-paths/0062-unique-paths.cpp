class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(m,0);
        for(int i=0;i<m;i++)
        {
            vector<int> curr(n,0);
            for(int j=0;j<n;j++)
            {
                if(i==0&&j==0){ curr[j]=1; continue; }
                int left=0,up=0;
                if(i>0) left=prev[j];
                if(j>0) up=curr[j-1];
                curr[j]=left+up;
            }
            prev=curr;
        }
        return prev[n-1];
    }
};