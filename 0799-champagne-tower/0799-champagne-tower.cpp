class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> t(101, vector<double>(101, 0.0));
        t[0][0] = (double)poured;
        
        for(int row = 0; row<=query_row; row++) {
            for(int col = 0; col<=row; col++) {
                
                double excess = (t[row][col] - 1.0)/2.0;
                
                if(excess > 0) { 
                    t[row+1][col]   += excess;
                    t[row+1][col+1] += excess;
                }
            }
        }
        

        return min(1.0, t[query_row][query_glass]);
    }
};