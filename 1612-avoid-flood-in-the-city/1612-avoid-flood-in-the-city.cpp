class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        unordered_map<int, int> map;   // lake -> last day it was filled
        set<int> dryDays;              // indices of dry days (rains[day] == 0)
        vector<int> ans(n, 1);         // default all dry days to dry lake 1

        for (int day = 0; day < n; day++) {
            int lake = rains[day];
            if (lake == 0) {
                dryDays.insert(day);                    
            } else {
                ans[day] = -1;                           
                if (map.count(lake)) {
                    auto it = dryDays.lower_bound(map[lake] + 1);   

                    if (it == dryDays.end()) {
                        return {};
                    }
                    ans[*it] = lake;                    
                    dryDays.erase(it);
                }
                map[lake] = day;                       
            }
        }
        return ans;
    }
};