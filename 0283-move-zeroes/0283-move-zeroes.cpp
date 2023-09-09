#include <algorithm>
#include <vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,n=nums.size()-1,j=0;
        for(i=0;i<=n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};