class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        int arrow=1;
        sort(points.begin(),points.end());
        int left=points[0][0];
        int right=points[0][1];

        for(int i=1;i<n;i++)
        {
            if(points[i][0]<=right && points[i][1]>=left)
            {
                left=max(points[i][0],left);
                right=min(points[i][1],right);
            }
            else
            {
                arrow++;
                left=points[i][0];
                right=points[i][1];
            }
        }
        return arrow;

    }
};