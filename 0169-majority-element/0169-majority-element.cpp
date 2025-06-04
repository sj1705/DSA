class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int el;
        for(int i=0;i<nums.size();i++)
        {
            if(c==0)
            {
                c++;
                el=nums[i];
            }
            else if( nums[i]==el)
                c++;
            else
                c--;
        }
        return el;
    }
};