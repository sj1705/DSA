class Solution {
public:
    static bool compareIntervals(const vector<int>& a, const vector<int>& b) {
        if (a[1] != b[1]) {
            return a[1] < b[1];
        }
        return a[0] > b[0];
    }

    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compareIntervals);

        int pointsCount = 0;
        int p1 = -1; // Second-to-last point
        int p2 = -1; // Last point

        for (const auto& interval : intervals) {
            int start = interval[0];
            int end = interval[1];

            bool p1Inside = (start <= p1);
            bool p2Inside = (start <= p2);

            if (p1Inside && p2Inside) {
                continue; // Already covered
            } 
            else if (p2Inside) {
                // Only one point covered; add one more at the end
                pointsCount++;
                p1 = p2;
                p2 = end;
            } 
            else {
                // No points covered; add two points at the end
                pointsCount += 2;
                p1 = end - 1;
                p2 = end;
            }
        }

        return pointsCount;
    }
};