class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> after(2,vector<int>(3,0));
        vector<vector<int>> curr(2,vector<int>(3,0));
        for(int index = n-1 ; index >=0 ; index--){
            for(int buy = 0 ;buy<=1 ; buy++){
                for(int cnt =1 ; cnt<=2 ; cnt++){
                    if(buy){
                        // Buy
                        int ans1 = -prices[index] +after[0][cnt];
                        // Not Buy
                        int ans2 = after[1][cnt];
                        curr[buy][cnt]= max(ans1,ans2);
                    }else{
                        // Sell
                        int ans1 = prices[index] + after[1][cnt-1];
                        // Not Sell
                        int ans2 = after[0][cnt];
                        curr[buy][cnt] = max(ans1,ans2);
                    }
                }
                after=curr;
            }
        }
        return after[1][2];
    }
};