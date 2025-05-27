class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum=0;
        for(int i=0;i<k;i++)
        {
            lsum+=nums[i];
        }
        int  rsum=0;
        int maxsum=lsum;
        int right_ind=nums.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            lsum-=nums[i];
            rsum+=nums[right_ind];
            right_ind--;
            maxsum=max(maxsum,lsum+rsum);
        }
        return  maxsum;
        
    }
};