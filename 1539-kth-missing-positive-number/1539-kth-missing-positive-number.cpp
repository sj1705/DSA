class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (int i : arr) {
            if (i <= k) {
                k++; // If the current number is not missing, shift k forward
            } else {
                break; // We found the gap where the kth number resides
            }
        }
        return k;
    }
};