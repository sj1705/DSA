class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
   int i=0,j=matrix[0].size()-1;
    bool val=false;
    while(i<matrix.size() &&  j>=0){
        if(matrix[i][j] == target){
            val=true;
        }
        if(matrix[i][j] > target){
            j--;
        }else{
            i++;
        }
    }
    return val;
    }
};