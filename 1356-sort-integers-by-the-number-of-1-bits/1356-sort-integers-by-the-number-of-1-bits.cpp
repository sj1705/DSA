class Solution {
public:
    int count(int n) {
        int count = 0;
        while (n > 0) {
            if ((n & 1) == 1) count++; 
            n = n >> 1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [this](int a, int b) {
            int ca = count(a);
            int cb = count(b);

            if (ca == cb) return a < b;

            return ca < cb;
        };

        sort(arr.begin(), arr.end(), lambda);
        return arr;
    }
};