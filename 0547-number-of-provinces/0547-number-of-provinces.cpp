class Solution {
public:

    void dfs(vector<vector<int>> arr, int i, int visited[]){

        for(int j=0; j<arr.size(); j++){
            if(arr[i][j]==1 && visited[j]==0){
                visited[j] = 1;
                dfs(arr,j,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& arr) {
        int n = arr.size();
        int visited[n];
        memset(visited,0,sizeof visited);
        int ans = 0;

        for(int i=0; i<n; i++){
            if(visited[i]==0){
                ans++;
                dfs(arr,i,visited);
            }
        }
        return ans;
    }
};