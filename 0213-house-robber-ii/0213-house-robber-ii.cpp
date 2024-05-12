class Solution {
public:
    int rob1(vector<int>& nums) {
     int prev=nums[0];
        int prev2=0;
        int n= nums.size();
        for(int i=1;i<n;i++)
        {
            int pick=nums[i];
            if (i >1) pick+=prev2;
            int notpick=prev;
            int curi=max(pick,notpick);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        vector<int> temp1(begin(nums), end(nums)-1);
        vector<int> temp2(begin(nums)+1, end(nums));
        return max(rob1(temp1) , rob1(temp2));
    }
};