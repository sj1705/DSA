class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int counter = k; 
        for (int num : nums) 
        {
            if (num == 1) 
            {
                if (counter < k) 
                {
                    return false;
                }
                counter = 0;
            } 
            else 
            {
                counter++;
            }
        }
        
        return true;
    }
};