class Solution {
public:
    vector<vector<int>> dp;

    bool f(string& s, int i, int c) {
        if(c < 0) return false;
        if(i == s.length()) return c == 0;
        if(dp[i][c] != -1) return dp[i][c];

        bool res = false;
        if(s[i] == '(') {
            res = f(s, i + 1, c + 1);
        } else if(s[i] == ')') {
            res = f(s, i + 1, c - 1);
        } else {
            res = f(s, i + 1, c - 1) || f(s, i + 1, c + 1) || f(s, i + 1, c);
        }

        dp[i][c] = res;
        return res;
    }

    bool checkValidString(string s) {
        int n = s.length();
        dp.assign(n + 1, vector<int>(n + 1, -1));
        return f(s, 0, 0);
    }
};
