class Solution {
public:
    bool f(vector<int>& weights, int days, int m) {
        int c = 1; 
        int curr_weight = 0; 
        
        for (int i = 0; i < weights.size(); i++) {
            if (curr_weight + weights[i] > m) {
                c++;           
                curr_weight = weights[i]; 
            } else {
                curr_weight += weights[i]; 
            }
        }
        return c <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int high = 0; 
        int low = 0;
        
        for (int i : weights) {
            high += i;
            low = max(low, i);
        }

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (f(weights, days, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};