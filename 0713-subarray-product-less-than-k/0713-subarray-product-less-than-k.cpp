class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return  0;
        int n=nums.size();
        int l=0;
        int r=0;
        int count=0;
        int prd=1;
        while(r<n)
        {
            prd*=nums[r];
            while(prd>=k)
            {
                prd/=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;
        }
        return count;
    }
};