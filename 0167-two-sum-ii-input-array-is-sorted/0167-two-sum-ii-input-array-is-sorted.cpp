class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int p1=0,p2=nums.size()-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[p1]+nums[p2]==target)
                return {p1+1,p2+1};
            else if (nums[p1]+nums[p2] < target)
                p1++;
            else p2--;
        }
        return {0,0};
    }
};