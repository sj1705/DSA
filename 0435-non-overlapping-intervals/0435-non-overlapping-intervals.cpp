class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b) {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), comp);
        int n = intervals.size();

        int c = 1;
        int end = intervals[0][1]; 

        for (int i = 1; i < n; i++) {
            if (end <= intervals[i][0]) { 
                c++;
                end = intervals[i][1]; 
            }
        }
        return n - c; 
    }
};