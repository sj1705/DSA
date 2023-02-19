class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int > arr (nums.size());
        arr[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            arr[i]=arr[i-1]+nums[i];
        }
        return arr;
    }
};