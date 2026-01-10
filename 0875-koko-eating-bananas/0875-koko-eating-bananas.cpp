class Solution {
public:
    // Helper should return 1 (true) if Koko CAN finish within h hours
    int bananaeat(vector<int>& piles, int mid, int h) {
        int n = piles.size();
        long long sum = 0; // Use long long: sum of hours can exceed INT_MAX
        for(int i = 0; i < n; i++) {
            sum += (1LL * piles[i] + mid - 1) / mid; 
        }
        
        // If sum is less than or equal to h, she CAN finish
        if(sum <= h) 
            return 1; 

        return 0; // Too slow
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        
        // Fix: Find the actual maximum pile, as the input isn't always sorted
        int high = 0;
        for(int x : piles) if(x > high) high = x;

        int ans = high; 
        while(low <= high) {
            int mid = low + (high - low) / 2;
            
            // If mid is a valid speed (1), try to find a smaller one (left)
            if(bananaeat(piles, mid, h) == 1) {
                ans = mid;
                high = mid - 1;
            }
            // If mid is too slow (0), move right
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};