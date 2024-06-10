class Solution {
public:
    int rob(vector<int>& nums) {
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
};