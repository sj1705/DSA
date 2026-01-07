class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int el=0;
        for(int i =0;i<nums.size();i++)
        {
            if(c==0)
                el=nums[i];
            if(nums[i]!=el)
                c--;
            else
                c++;
        }
        return el;
    }
};