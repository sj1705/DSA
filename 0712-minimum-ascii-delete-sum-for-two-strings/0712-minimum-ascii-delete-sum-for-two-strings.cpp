// class Solution {
// public:
//     int n;
//     int m;
//     int solve(int i,int j,string &s1,string &s2, vector<vector<int>> &dp)
//     {
//         if(i>=n&&j>=m) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
//         if(i>=n) return s2[j] + solve(i,j+1,s1,s2,dp);
//         if(j>=m) return s1[i] + solve(i+1,j,s1,s2,dp);
//         if(s1[i]==s2[j]) return solve(i+1,j+1,s1,s2,dp);

//         int deletes1=s1[i]+solve(i+1,j,s1,s2,dp);
//         int deletes2=s2[j]+solve(i,j+1,s1,s2,dp);

//         return dp[i][j]=min(deletes1,deletes2);
//     }
//     int minimumDeleteSum(string s1, string s2) {
//         n=s1.size();
//         m=s2.size();

//         vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
//         return solve(0,0,s1,s2,dp);
//     }
// };

// class Solution {
// public:
//     int minimumDeleteSum(string s1, string s2) {
//         int n = s1.size();
//         int m = s2.size();
        
//         // dp[i][j] will store the min delete sum for s1 starting at i and s2 starting at j
//         vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

//         // 1. Fill the base case for when s2 is empty (must delete s1)
//         for (int i = n - 1; i >= 0; i--) {
//             dp[i][m] = dp[i + 1][m] + s1[i];
//         }

//         // 2. Fill the base case for when s1 is empty (must delete s2)
//         for (int j = m - 1; j >= 0; j--) {
//             dp[n][j] = dp[n][j + 1] + s2[j];
//         }

//         // 3. Fill the rest of the table
//         for (int i = n - 1; i >= 0; i--) {
//             for (int j = m - 1; j >= 0; j--) {
//                 if (s1[i] == s2[j]) {
//                     // Match: no cost, move diagonally
//                     dp[i][j] = dp[i + 1][j + 1];
//                 } else {
//                     // No match: take min of deleting from s1 or s2
//                     int deleteS1 = s1[i] + dp[i + 1][j];
//                     int deleteS2 = s2[j] + dp[i][j + 1];
//                     dp[i][j] = min(deleteS1, deleteS2);
//                 }
//             }
//         }

//         return dp[0][0];
//     }
// };


class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        
        // We only need one row of size m + 1
        vector<int> curr(m + 1, 0);

        // 1. Initialize the "0-th row" (prefix sum of s2)
        for (int j = 1; j <= m; j++) {
            curr[j] = curr[j - 1] + s2[j - 1];
        }

        // 2. Iterate through each character of s1
        for (int i = 1; i <= n; i++) {
            int prevDiagonal = curr[0]; // Stores dp[i-1][j-1]
            curr[0] += s1[i - 1];       // Update first element (dp[i][0])
            
            for (int j = 1; j <= m; j++) {
                int temp = curr[j]; // Store current value before overwriting (will be prevDiagonal for next j)
                
                if (s1[i - 1] == s2[j - 1]) {
                    // Match: Use the top-left value
                    curr[j] = prevDiagonal;
                } else {
                    // No match: Min of top (curr[j]) or left (curr[j-1])
                    curr[j] = min(s1[i - 1] + curr[j], 
                                 s2[j - 1] + curr[j - 1]);
                }
                prevDiagonal = temp; // Update for the next column
            }
        }

        return curr[m];
    }
};