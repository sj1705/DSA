class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int profit=0;
        for(int i: prices)
        {
            mini=min(mini,i);
            profit = max(profit,i-mini);
        }
        return profit; 
    }
};