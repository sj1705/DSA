class Solution {
public:
    int maxSideLength(vector<vector<int>>& mat, int threshold) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> pref(rows + 1, vector<int>(cols + 1, 0));
        
        // 1. Build 2D Prefix Sum
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= cols; ++j) {
                pref[i][j] = mat[i-1][j-1] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
            }
        }
        
        int ans = 0;
        // 2. Slide through the matrix
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= cols; ++j) {
                // Try to increase the current best side length 'ans'
                int k = ans + 1; 
                if (i >= k && j >= k) {
                    int currentSum = pref[i][j] - pref[i-k][j] - pref[i][j-k] + pref[i-k][j-k];
                    if (currentSum <= threshold) {
                        ans = k; // Found a larger square
                    }
                }
            }
        }
        
        return ans;
    }
};