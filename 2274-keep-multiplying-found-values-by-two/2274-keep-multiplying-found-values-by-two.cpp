class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int cur=original;
        for(int i=0;i<nums.size();i++)
        {
            if(original==nums[i])
            {
                cur=2*original;
                original=cur;
            }
        }
        return cur;
    }
};