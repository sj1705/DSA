class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int size = nums.size();
        int bitMask = (1 << size);    
        
        vector<vector<int>> res;
        
        for(int subsetM = 0; subsetM < bitMask; subsetM++) {
            vector<int> arr;
            
            for(int i = 0; i < size; i++) {
                if((subsetM & (1 << i)) != 0) { 
				
                    arr.push_back(nums[i]);
                }
            }
            
            res.push_back(arr);
        }
        
        return res;
    }
};