class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxEle=*max_element(nums.begin(),nums.end());
        long long answer=0;
        int left=0;
        int n=nums.size();
        int countMax=0;

        for(int right=0;right<n;right++)
        {
            if(nums[right]==maxEle)
            {
                countMax++;
            }
            while(countMax>=k)
            {
                answer+=(n-right);
                if(nums[left]==maxEle)
                {
                    countMax--;
                }
                left++;
            }
        }
        return answer;
    }
};