class Solution {
public:
    //Recursion
    int Rec(int n){
        if(n==0 || n==1) return 1;
        int left = Rec(n-1);
        int right = Rec(n-2);
        return left+right;
    }

    //Memoization
    int Rec__memo(int n,vector<int>&dp){
        //base case
        if(n==0 || n==1) return 1;
        //Memoization
        if(dp[n]!= -1) return dp[n];

        int left = Rec__memo(n-1,dp);
        int right = Rec__memo(n-2,dp);

        return dp[n] = left+right;
    }

    //Bottom-Up | Space-->O(n)
    int DP(int n,vector<int>&dp){
        dp[0] = dp[1]=1;
        for(int i=2;i<n+1;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

    //Bottom-Up | Space-->O(1)
    int DP_spaceConst(int n){
        int prev = 1;
        int prev2 = 1;
        for(int i=2;i<n+1;i++){
            int curr = prev + prev2;
            prev2 = prev;
            prev=curr;
        }
        return prev;
    }
    int climbStairs(int n) {
        // return Rec(n); //Recursion

        //Memoization
        vector<int>dp(n+1,-1);
        // return Rec__memo(n,dp);

        // return DP(n,dp);

        return DP_spaceConst(n);
    }
};