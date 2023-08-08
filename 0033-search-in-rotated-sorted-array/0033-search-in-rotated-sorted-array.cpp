class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid = s +((e-s)/2);
        while(s<e){
            mid = s +((e-s)/2);
            if(nums[mid]>=nums[0])
                s=mid+1;
            else
                e=mid;
        }
        int pivot=s;
        s=0;
        e=nums.size()-1;
        if(target>=nums[0])
            e=pivot;
        else 
            s=pivot;
        while(s<=e){
            mid=s + (e-s)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                s=mid+1;
            else
                e=mid-1;
        }
        return -1;
    }
};