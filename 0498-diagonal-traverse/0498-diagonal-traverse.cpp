class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map <int,vector<int>> mpp;
        for(int i=0;i<mat.size();i++)
        {
            for (int j=0;j<mat[0].size();j++)
            {
                mpp[i+j].push_back(mat[i][j]);
            }
        }
        vector <int> ans;
        for(int i=0;i<mpp.size();i++)
        {
            if(i%2==0)
            {
                reverse(mpp[i].begin(),mpp[i].end());
            }
            for(int j=0;j<mpp[i].size();j++)
            {
                ans.push_back(mpp[i][j]);
            }
        }
        return ans;
    }
};