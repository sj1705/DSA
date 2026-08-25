class Solution {
public:
    void dfs(int node,vector <int> graph[], vector <int> &vis)
    {
        vis[node]=1;
        for(auto it:graph[node])
        {
            if(!vis[it])
            {
            dfs(it,graph,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector <int> graph[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    graph[i].push_back(j);
                }
            }
        }

        int count=0;
        vector <int> vis(n,0);

        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,graph,vis);
            }
        }
        return count;
    }
};