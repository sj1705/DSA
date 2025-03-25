class Solution {
public:
//Space optimization
    int climbStairs(int n) {
        vector <int> dp(n+1,-1);
       int prev2=1;
       int prev=1;
        for(int  i=2;i<=n;i++)
        {
            int curr=prev+prev2;
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};