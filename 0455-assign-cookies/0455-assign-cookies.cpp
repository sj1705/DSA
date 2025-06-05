class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int l = 0;
        int r = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        while (l < s.size() && r<g.size()) {
            if (g[r] <= s[l]) {
                r = r + 1;
            }
            l = l + 1;
        }
        return r;
    }
};