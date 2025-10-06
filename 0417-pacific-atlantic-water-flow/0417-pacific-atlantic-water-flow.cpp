#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> pacificAtlantic(std::vector<std::vector<int>>& heights) {
        if (heights.empty() || heights[0].empty()) {
            return {};
        }

        int m = heights.size();
        int n = heights[0].size();
        std::vector<std::vector<int>> result;

        std::vector<std::vector<bool>> pacificReachable(m, std::vector<bool>(n, false));
        std::vector<std::vector<bool>> atlanticReachable(m, std::vector<bool>(n, false));

        for (int c = 0; c < n; ++c) {
            dfs(0, c, pacificReachable, heights);
            dfs(m - 1, c, atlanticReachable, heights);
        }

        for (int r = 0; r < m; ++r) {
            dfs(r, 0, pacificReachable, heights);
            dfs(r, n - 1, atlanticReachable, heights);
        }

        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (pacificReachable[r][c] && atlanticReachable[r][c]) {
                    result.push_back({r, c});
                }
            }
        }

        return result;
    }

private:
    void dfs(int r, int c, std::vector<std::vector<bool>>& reachable, const std::vector<std::vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        reachable[r][c] = true;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, 1, -1};

        for (int i = 0; i < 4; ++i) {
            int new_r = r + dr[i];
            int new_c = c + dc[i];

            if (new_r >= 0 && new_r < m && new_c >= 0 && new_c < n &&
                !reachable[new_r][new_c] &&
                heights[new_r][new_c] >= heights[r][c]) {
                
                dfs(new_r, new_c, reachable, heights);
            }
        }
    }
};