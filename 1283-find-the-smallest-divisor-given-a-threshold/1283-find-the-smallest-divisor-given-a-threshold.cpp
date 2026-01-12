class Solution {
public:
     bool f(vector<int>& nums, int threshold,int m)
     {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum += (nums[i] + m - 1) / m;
        }
        return sum<=threshold;
     }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high;
        for (int i : nums) high = max(high, i);
        int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(f(nums,threshold,mid))
            {
                high=mid-1;
                ans=mid;
            }
            else    low=mid+1;
        }
        return ans;

    }
};