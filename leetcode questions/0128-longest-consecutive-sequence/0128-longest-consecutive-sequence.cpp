class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> ans;
        int counter = 1;
        int maxi = INT_MIN;
        if(nums.size() == 0)
            return 0;
        else if(nums.size() == 1)
            return 1;
        sort(nums.begin(),nums.end());
        ans.push_back(nums[0]);

        for(int i = 1;i < nums.size();i++){
            if(ans.back() + 1 == nums[i]){
                ans.push_back(nums[i]);
                counter++;
            }else if(ans.back()+1 != nums[i] && ans.back() != nums[i]){
                ans.clear();
                ans.push_back(nums[i]);
                maxi = max(maxi,counter);
                counter = 1;
            }
            maxi = max(maxi, counter);
        }
        return maxi;
    }
};