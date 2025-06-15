class Solution {
public:
    int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int h = std::min(height[left], height[right]);
        int w = right - left;
        maxArea = std::max(maxArea, h * w);

        // Move the pointer at the shorter line
        if (height[left] < height[right])
            ++left;
        else
            --right;
    }

    return maxArea;
    }
};