class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        // Ensure s2 is the shorter string to minimize space
        if (s1.size() < s2.size()) swap(s1, s2);
        
        int n = s1.size(), m = s2.size();
        vector<int> prev(m + 1, 0);

        // Initialize first row
        for (int j = 1; j <= m; j++) 
            prev[j] = prev[j - 1] + s2[j - 1];

        // We use two rows to keep the logic branch-friendly and clean
        vector<int> curr(m + 1, 0);

        for (int i = 1; i <= n; i++) {
            curr[0] = prev[0] + s1[i - 1]; // First element of current row
            for (int j = 1; j <= m; j++) {
                if (s1[i - 1] == s2[j - 1]) {
                    curr[j] = prev[j - 1]; // Match: Diagonal move
                } else {
                    // No match: min of top or left
                    // s1[i-1]+prev[j] is deleting from s1
                    // s2[j-1]+curr[j-1] is deleting from s2
                    curr[j] = min(s1[i - 1] + prev[j], 
                                  s2[j - 1] + curr[j - 1]);
                }
            }
            prev = curr; // Row swap (efficient in C++ with vectors)
        }

        return prev[m];
    }
};