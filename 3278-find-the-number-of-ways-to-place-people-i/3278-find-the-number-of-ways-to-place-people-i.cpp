class Solution {
public:
    bool check(vector<int>& A, vector<int>& B, vector<vector<int>>& points) {
        if (A[0] > B[0] || A[1] < B[1]) {
            return false;
        }
        for (const auto& C : points) {
            if (C == A || C == B) {
                continue;
            }
            if (C[0] >= A[0] && C[0] <= B[0] && C[1] >= B[1] && C[1] <= A[1]) {
                return false;
            }
        }
        return true;
    }
    int numberOfPairs(vector<vector<int>>& points) {
        int count = 0;
        for (int i = 0; i < points.size(); ++i) {
            for (int j = 0; j < points.size(); ++j) {
                if (i == j) {
                    continue;
                }
                if (check(points[i], points[j], points)) {
                    count++;
                }
            }
        }
        return count;
    }
};