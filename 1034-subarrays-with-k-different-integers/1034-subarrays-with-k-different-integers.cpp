class Solution {
public:
    int f(vector<int> & nums, int k)
    {
        int l=0,r=0,c=0;
        map<int,int> mpp;
        while(r<nums.size())
        {
            mpp[nums[r]]++;
            while(mpp.size()>k)
            {
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            c=c+(r-l+1);
            r++;
        }
        return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return f(nums,k)-f(nums,k-1);
    }
};