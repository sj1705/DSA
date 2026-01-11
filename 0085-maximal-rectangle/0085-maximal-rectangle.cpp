class Solution {
public:
        int largestRectangleArea(vector<int> &heights) {
        stack<int> st; 
        int maxA = 0;  
        int n = heights.size();

        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()]; 
                st.pop();

                int width;
                if (st.empty()) {
                    width = i; 
                } else {
                    width = i - st.top() - 1; 
                }
                maxA = max(maxA, width * height);
            }
            st.push(i);
        }
        return maxA;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> curr(matrix[0].size(),0);
        int maxi=INT_MIN;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if (matrix[i][j] == '1') {
                    curr[j] += 1;
                } else {
                    curr[j] = 0; 
                }            }
            maxi=max(maxi,largestRectangleArea(curr));
        }
        return maxi;
    }
};