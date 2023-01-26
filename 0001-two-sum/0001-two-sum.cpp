class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vtr;
        for(int i = 0 ;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    vtr.push_back(i);
                    vtr.push_back(j);
                    break;                    
                }
            }
        }
        return vtr;
    }
};