class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int total = nums.size();
        int sum=0;
        for(int i:nums)
            sum +=i;
        return (total*(total+1)/2)-sum;

    }
};