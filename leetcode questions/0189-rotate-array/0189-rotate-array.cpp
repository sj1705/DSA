class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int > temp(nums.size());
        for(int j=0;j<nums.size();j++){
            temp[(j+k)%nums.size()]=nums[j];
        }
        nums=temp;
    }
};