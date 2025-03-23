class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxp=0;
        int mini=prices[0];
        for(auto it: prices)
        {
            int cost=it-mini;
            maxp=max(cost,maxp);
            mini=min(mini,it);
        }
        return maxp;
    }
};