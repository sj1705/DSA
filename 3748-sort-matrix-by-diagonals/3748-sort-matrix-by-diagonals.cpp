class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& mat) {
        map <int,vector<int>> mpp;
        for(int i=0;i<mat.size();i++)
        {
            for (int j=0;j<mat[0].size();j++)
            {
                mpp[i-j].push_back(mat[i][j]);
            }
        }
        for (auto& pair : mpp) 
        {
            int key = pair.first;
            vector<int>& diagonal = pair.second;

            if (key >= 0) {
                    sort(diagonal.begin(), diagonal.end(), greater<int>());


            } else {
                    sort(diagonal.begin(), diagonal.end());

            }
        }
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j]=mpp[i-j][0];
                mpp[i-j].erase(mpp[i-j].begin());
            }
        }
        return mat;
    }
};