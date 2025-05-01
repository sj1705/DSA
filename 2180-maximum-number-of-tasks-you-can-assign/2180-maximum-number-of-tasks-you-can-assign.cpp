
class Solution {
public:
    bool isPossible(vector<int> T, vector<int> W, int pills, int strength) {
        int harderTask = T.size() - 1;

        for (int i = 0; i < T.size(); ++i) {
            if (W.back() >= T[harderTask]) {
                W.pop_back();
            } else {
                if (pills == 0) return false;
                int power_needed = T[harderTask] - strength;
                auto it = lower_bound(W.begin(), W.end(), power_needed);
                if (it == W.end()) return false;
                W.erase(it);
                pills--;
            }
            harderTask--;
        }

        return true;
    }

    int maxTaskAssign(vector<int>& T, vector<int>& W, int pills, int strength) {
        sort(T.begin(), T.end());
        sort(W.begin(), W.end());

        int l = 0, h = min((int)T.size(), (int)W.size());
        int ans = 0;

        while (l <= h) {
            int mid = (l + h) / 2;

            // Create copies of subarrays to avoid modifying original
            vector<int> taskSlice(T.begin(), T.begin() + mid);
            vector<int> workerSlice(W.end() - mid, W.end());

            if (isPossible(taskSlice, workerSlice, pills, strength)) {
                ans = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        return ans;
    }
};
