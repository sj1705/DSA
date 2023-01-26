class Solution {
public:
    bool check(vector<int>& nums) {
 int length = nums.size();
        bool flag1 = false;
        int flag=0;
        if(nums[0] >= nums[nums.size()-1])
        {
            flag1=true;
        }
        for(int i=0;i<length-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                flag++;
            }
        }
        if(flag1==true && flag==1 || flag==0)
        {
            return true;
        }
        return false;
    }
};