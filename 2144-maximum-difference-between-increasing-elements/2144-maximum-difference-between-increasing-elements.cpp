class Solution {
public:
int maximumDifference(vector<int>& nums)
{
int minidx=INT_MAX;
int ans=INT_MIN;
for(int i=0;i<nums.size();i++)
{
minidx=min(nums[i],minidx);
ans=max(ans,nums[i]-minidx);
}
if(ans==0)
return -1;
return ans;
}
};
