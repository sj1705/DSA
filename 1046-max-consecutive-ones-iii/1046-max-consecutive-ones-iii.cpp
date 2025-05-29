class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int l=0;
        int r=0;
        int zeros=0;
        while(r<nums.size())
        {
            if(nums[r]==0) zeros++;
            if(zeros>k)
            {
                if(nums[l]==0) zeros--;
                l++;
            }
            if(zeros<=k)
            {
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};