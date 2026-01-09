class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        // Edge cases: array of size 1 or single element at boundaries
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
        int l=0;
        int h=n-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])
                return nums[mid];
            else if(mid %2==0)
            {
                if(nums[mid]==nums[mid+1])
                    l=mid+1;
                else h=mid-1;
            }
            else
            {
                if (nums[mid] == nums[mid - 1])
                    l = mid + 1;
                else 
                    h = mid - 1;
            }
        }
        return -1;
    }
};