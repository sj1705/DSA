class Solution {
public:
    vector<int> genrow(int n)
    {
        vector<int>ansRow;
        long long ans=1;
        ansRow.push_back(ans);
        for(int i=1;i<n;i++)
        {
            ans=ans*(n-i);
            ans=ans/i;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>fans;
        for(int i=1;i<=numRows;i++)
        {
            fans.push_back(genrow(i));
        }
        return fans;
    }
};