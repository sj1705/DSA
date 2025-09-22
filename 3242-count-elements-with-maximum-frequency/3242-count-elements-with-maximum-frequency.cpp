class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        // Step 1: Count the frequency of each element.
        // A map or a vector can be used. Since constraints are 1 <= nums[i] <= 100,
        // a vector of size 101 is efficient.
        vector<int> freq(101, 0);
        for (int num : nums) {
            freq[num]++;
        }
        
        int maxFreq = 0;
        // Step 2: Find the maximum frequency among all elements.
        for (int count : freq) {
            if (count > maxFreq) {
                maxFreq = count;
            }
        }
        
        // If maxFreq is 0, it means the input array was empty, so the total frequency is 0.
        if (maxFreq == 0) {
            return 0;
        }
        
        int totalFrequencies = 0;
        // Step 3: Sum the frequencies of all elements that have the maximum frequency.
        for (int count : freq) {
            if (count == maxFreq) {
                totalFrequencies += count; // You can also write totalFrequencies += maxFreq;
            }
        }
        
        return totalFrequencies;
    }
};