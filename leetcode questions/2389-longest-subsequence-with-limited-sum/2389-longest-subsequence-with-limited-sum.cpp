class Solution {
public:
    vector<int> answerQueries(vector<int>& n, vector<int>& queries) {
                sort(n.begin(),n.end());
        vector<int>v;
        for(int i=1;i<n.size();i++)
        {
            n[i]+=n[i-1];
        }
       for (int& q: queries)
            v.push_back(upper_bound(n.begin(), n.end(), q) - n.begin());
   return v; }
    };