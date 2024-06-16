class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        bool inserted = false;
        for(auto it = intervals.begin(); it != intervals.end(); ++it) {
            if((*it)[0] >= newInterval[0]) {
                intervals.insert(it, newInterval);
                inserted = true;
                break;
            }
        }
        if(!inserted) {
            intervals.push_back(newInterval);
        }
        
        vector<vector<int>> ans;
        vector<int> temp = intervals[0];
        for(auto it: intervals) {
            if(it[0] <= temp[1]) {
                temp[1] = max(it[1], temp[1]);
            } else {
                ans.push_back(temp);
                temp = it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
