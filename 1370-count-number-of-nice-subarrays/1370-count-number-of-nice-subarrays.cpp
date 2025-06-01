class Solution {
public:
        int  f(vector<int> &nums,int  goal)
    {
        if(goal < 0) return 0;
        int l=0,r=0,sum=0,c=0;
        while(r<nums.size())
        {
            sum+=(nums[r]%2);
            while(sum>goal)
            {
                sum-=(nums[l]%2);
                l++;
            }
            c=c+(r-l+1);
            r++;
        }
        return c;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
                return  f(nums,k)-f(nums,k-1);
    }
};