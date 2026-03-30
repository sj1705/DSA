class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size() -1;
        while(j>=0)
        {
            int s=nums[i]+nums[j];
            if(s==target)
            {
                return {i+1,j+1};
            }
            else if(s<target)
            {
                i++;
            }
            else j--;
        }
        return {};
    }
};