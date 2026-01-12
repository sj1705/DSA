class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        if(points.size()==1) return 0;
        int dis=0;
        for(int i=1;i<points.size();i++)
        {
            int dx=abs(points[i][0]-points[i-1][0]);
            int dy=abs(points[i][1]-points[i-1][1]);
            dis+=max(dx,dy);
        }
        return dis;
    }
};