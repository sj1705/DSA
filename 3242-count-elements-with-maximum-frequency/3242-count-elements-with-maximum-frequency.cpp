class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0);
        for (int num : nums) {
            freq[num]++;
        }
        
        int maxFreq = 0;
        for (int count : freq) {
            if (count > maxFreq) {
                maxFreq = count;
            }
        }
        
        if (maxFreq == 0) {
            return 0;
        }
        
        int totalFrequencies = 0;
        for (int count : freq) {
            if (count == maxFreq) {
                totalFrequencies += count;
            }
        }
        
        return totalFrequencies;
    }
};