class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int hi=n-1;
        int ans=INT_MAX;
        while(low<=hi)
        {
            int mid=(low+hi)/2;
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else
            {
                ans=min(ans,nums[mid]);
                hi=mid-1;
            }
        }
        return  ans;
    }
};