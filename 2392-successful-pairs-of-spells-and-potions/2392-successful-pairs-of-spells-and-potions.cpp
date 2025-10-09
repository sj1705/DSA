class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());

        for (long long spell : spells) {
            long long min_potion = (success + spell - 1) / spell;
            auto it = lower_bound(potions.begin(), potions.end(), min_potion);
            ans.push_back(potions.end() - it);
        }
        
        return ans;
    }
};