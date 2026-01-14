class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix.size() - 1;
        

        int upperbound = matrix.size(); 

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(matrix[mid][0] > target) { 
                upperbound = mid;
                high = mid - 1;
            }
            else if(matrix[mid][0] == target) {
                return true;
            }
            else {
                low = mid + 1;
            }
        }

        if(upperbound == 0) return false;

        int targetRow = upperbound - 1;
        
        low = 0;
        high = matrix[0].size() - 1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(matrix[targetRow][mid] == target)
                return true;
            else if(matrix[targetRow][mid] < target)
                low = mid + 1;
            else 
                high = mid - 1;
        }
        
        return false;
    }
};