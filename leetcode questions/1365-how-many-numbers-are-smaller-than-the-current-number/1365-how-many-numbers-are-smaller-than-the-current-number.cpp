class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> temp;
        int element,counter=0;
        for(auto i =0; i<nums.size();i++){
            element = nums[i];
            counter=0;
            for(auto j=0;j<nums.size();j++){
            if(element>nums[j]){
                counter++;
            }
        }
            temp.push_back(counter);
        }
        return temp;
    }
};