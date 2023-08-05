class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(),
			cols = matrix[0].size(),
            s = 0, e = cols - 1;
			
        while (s < rows && e > -1) {
            int cur = matrix[s][e];
            if (cur == target) return true;
            if (target > cur) s++;
            else e--;
        }
        
        return false;
    }
};