class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();


        for(int i=0;i< row; i++){
            for(int j = 0; j <col;j++){
                if(matrix[i][j] == 0){
                    for(int k = 0 ; k < row ; k++){
                        if(matrix[k][j] != 0){
                            matrix[k][j] = INT_MIN+1;
                        }
                    }

                    for(int k = 0 ; k < col ; k++){
                        if(matrix[i][k] != 0){
                            matrix[i][k] = INT_MIN+1;
                        }
                    }
                }
            }
        }
        for(int i=0;i< row; i++){
            for(int j = 0; j <col;j++){
                if(matrix[i][j] == INT_MIN+1 ){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};