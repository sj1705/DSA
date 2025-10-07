class Solution {
public:

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if (heights.empty() || heights[0].empty()) {
            return {};
        }

        rows = heights.size();
        cols = heights[0].size();
        
        // Grids to store whether a cell can reach the Pacific or Atlantic
        vector<vector<bool>> pacific_reachable(rows, vector<bool>(cols, false));
        vector<vector<bool>> atlantic_reachable(rows, vector<bool>(cols, false));

        // Start DFS from all cells bordering the oceans
        // Top and Bottom borders
        for (int c = 0; c < cols; ++c) {
            dfs(heights, 0, c, pacific_reachable);        // Top border (Pacific)
            dfs(heights, rows - 1, c, atlantic_reachable); // Bottom border (Atlantic)
        }
        // Left and Right borders
        for (int r = 0; r < rows; ++r) {
            dfs(heights, r, 0, pacific_reachable);        // Left border (Pacific)
            dfs(heights, r, cols - 1, atlantic_reachable); // Right border (Atlantic)
        }

        // Find all cells that can reach both oceans
        vector<vector<int>> result;
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (pacific_reachable[r][c] && atlantic_reachable[r][c]) {
                    result.push_back({r, c});
                }
            }
        }
        return result;
    }

private:
    int rows;
    int cols;
    void dfs(const vector<vector<int>>& heights, int r, int c, vector<vector<bool>>& visited) {
        // Mark the current cell as visited
        visited[r][c] = true;

        // Define directions for neighbors (Up, Down, Left, Right)
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        // Explore neighbors
        for (int i = 0; i < 4; ++i) {
            int new_r = r + dr[i];
            int new_c = c + dc[i];

            // Check for valid and unvisited neighbors with sufficient height
            if (new_r >= 0 && new_r < rows && new_c >= 0 && new_c < cols &&
                !visited[new_r][new_c] && heights[new_r][new_c] >= heights[r][c]) {
                dfs(heights, new_r, new_c, visited);
            }
        }
    }
};