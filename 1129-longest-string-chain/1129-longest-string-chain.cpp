class Solution {
public:

    bool compare(string &a , string &b){
            if(a.size() != b.size()-1)return false;
            int i=0;
            int j=0;
            while(i<a.size()&&j<b.size()){
                if(a[i]==b[j])
                    i++;
                j++;
            }
            if(i==a.size())
                return true;
        return false;
    }

    int solve(int ind , int prev , vector<string> &words,vector<vector<int>> &dp){
        if(ind>=words.size()) return 0;
        if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
        int not_pick = solve(ind+1, prev , words,dp);
        int pick = -1e9;
        if(prev == -1 || compare(words[prev],words[ind])){
            pick = 1 + solve(ind+1, ind, words,dp);
        }
        return dp[ind][prev+1]= max (not_pick , pick);
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string& a, const string& b) {
            return a.length() < b.length();
        });
        cout<<words[0];
        int n = words.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return solve(0,-1,words,dp);
    }
};