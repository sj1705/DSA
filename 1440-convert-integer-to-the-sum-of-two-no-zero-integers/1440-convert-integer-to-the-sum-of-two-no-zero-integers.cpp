class Solution {
public:
    bool hasNoZero(int num) {
        return to_string(num).find('0') == string::npos;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int a = 1; a < n; ++a) {
            int b = n - a;
            if (hasNoZero(a) && hasNoZero(b)) {
                return {a, b};
            }
        }
        return {};
    }
};