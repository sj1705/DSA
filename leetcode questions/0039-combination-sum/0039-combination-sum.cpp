class Solution {
public:
    void f(int i, int sum, vector<int>& candidates, vector<int>&ans, vector<vector<int>>&v){
        if(i==candidates.size()){
            if(sum==0){
                v.push_back(ans);
            }
            return;
        }
        if(candidates[i]<=sum){
            ans.push_back(candidates[i]);
            f(i, sum-candidates[i], candidates, ans, v);
            ans.pop_back();
        }
        f(i+1, sum, candidates, ans, v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>ans;
        f(0, target, candidates, ans, v);
        return v;
    }
};