class Solution {
public:
    int M = 1e9 + 7;

    int solve(int day, int& delay, int& forget,vector <long long> &memo) {
        if (day == 1) return 1;
        if(memo[day]!=-1) return memo[day];
        long long res = 0;
        
        for (int i = day - forget + 1; i <= day - delay; i++) {
            if (i > 0) {
                res = (res + solve(i, delay, forget, memo)) % M;
            }
        }
        return memo[day]= res;
    }

    int peopleAwareOfSecret(int n, int delay, int forget) {
        long long totsum = 0;
        vector <long long> memo(n+1,-1);
        for (int i = n - forget + 1; i <= n; i++) {
            if (i > 0) {
                totsum = (totsum + solve(i, delay, forget, memo)) % M;
            }
        }
        return totsum;
    }
};