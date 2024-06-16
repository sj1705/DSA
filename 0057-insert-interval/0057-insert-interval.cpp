class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        auto it = intervals.begin();
           int flag =0;
        while(it != intervals.end()) {
            if((*it)[0] < newInterval[0]) {
                ++it;
            } else {
                intervals.insert(it, newInterval);
                    flag=1;
                break;
            }
        }
if(flag==0)
        intervals.push_back(newInterval);
            
            
                    vector<vector<int>> ans;

            
                    vector<int> temp =intervals[0];
        for(auto it: intervals)
        {
            if(it[0]<=temp[1])
            {
                temp[1]=max(it[1],temp[1]);
            }
            else
            {
                ans.push_back(temp);
                temp=it;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};