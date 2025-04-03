class Solution {
public:

    int uniquePaths(int m, int n) {

        vector <int> dp(n+1,0);

        for(int i=0 ; i<m ; i++){
            vector <int> temp(n+1,0);
            for(int j=0 ; j<n ; j++){
                if( i == 0 && j == 0){
                    temp[j] = 1;
                    continue;
                }
                int left = 0;
                int top = 0;
                if(j-1 >= 0){
                    left = temp[j-1];
                }
                if(i-1 >= 0){
                    top = dp[j];
                }
                temp[j] = left+top;
            }
            dp = temp;
        }
        return dp[n-1];

    }
};