class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        int n=potions.size();
        for(int i=0;i<spells.size();i++)
        {
            double d=(double)success/spells[i];
            auto it=lower_bound(potions.begin(),potions.end(),d);
            if(it==potions.end())
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back((potions.end()-it));
            }
        }
        return ans;
    }
};