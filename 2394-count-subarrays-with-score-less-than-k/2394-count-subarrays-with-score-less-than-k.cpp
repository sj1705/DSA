class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int left=0;
        long long  sum=0;
        long long score=0;
        
        int n = nums.size();
        long long  cnt=0;

        for (int right = 0; right < n; right++) {
        
            sum+=nums[right];
            score = (sum*(right-left+1));

            while(score>=k)
            {
                sum-=nums[left];
                left++;
                score = sum*(right-left+1);
            }
     // update count of all such valid subarray
            if(score<k) cnt=cnt+(right-left+1);
        }
        return cnt;
    }
};