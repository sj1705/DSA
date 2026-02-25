class Solution {
public:
    // This must be static to be used as a pointer in std::sort
    static int count(int n) {
        int count = 0;
        while (n > 0) {
            if ((n & 1) == 1) count++;
            n = n >> 1;
        }
        return count;
    }

    // Static comparator function
    static bool compare(int a, int b) {
        int ca = count(a);
        int cb = count(b);

        if (ca == cb) {
            return a < b;
        }
        return ca < cb;
    }

    vector<int> sortByBits(vector<int>& arr) {
        // Pass the function name directly
        std::sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};