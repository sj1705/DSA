class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums);
};
/*********************************************************/
int Solution::findLengthOfLCIS(vector<int>& nums) {
    int maxLength=1, length=1, i, size = nums.size();
    for (i = 1; i < size; ++i) {
        if (nums[i-1] < nums[i]) {
            ++length;
            if (length > maxLength) {
                maxLength = length;
            }
        } else {
            length = 1;
        }
    }
    return maxLength;
}