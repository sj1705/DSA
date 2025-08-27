class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0, maxDiag = 0;
        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            int currDiag = l * l + w * w;
            if (currDiag > maxDiag) 
            {
                maxDiag = currDiag;
                maxArea = l * w;
            } 
            else if (currDiag == maxDiag) 
            {
                if (l * w > maxArea) {
                    maxDiag = currDiag;
                    maxArea = l * w;
                }
            }
        }
        return maxArea;
    }
};