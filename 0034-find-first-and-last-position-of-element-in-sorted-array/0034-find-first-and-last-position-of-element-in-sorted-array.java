class Solution {
    public int[] searchRange(int[] nums, int target) {
        int start = 0;
        int end = nums.length - 1;
        return searchRange(nums, target, start, end);
    }

    public int[] searchRange(int[] nums, int target, int start, int end) {
        int[] array = {-1, -1};
        if (start > end) return array;
        int pivot = (start + end) / 2;

        if (nums[pivot] == target) {
            int left = search(nums, target, start, pivot - 1, true);
            if (left == -1) left = pivot;
            int right = search(nums, target, pivot + 1, end, false);
            if (right == -1) right = pivot;
            array[0] = left;
            array[1] = right;
            return array;
        } else if (nums[pivot] < target) {
            return searchRange(nums, target, pivot + 1, end);
        }
        return searchRange(nums, target, start, pivot - 1);
    }

    public int search(int[] nums, int target, int start, int end, boolean isLeft) {
        if (start > end) return -1;
        int pivot = (start + end) / 2;
        if (isLeft) {
            if (nums[pivot] == target) {
                if (pivot == 0 || nums[pivot - 1] < target) {
                    return pivot;
                } else {
                    end = pivot - 1;
                }
            } else {
                start = pivot + 1;
            }
        } else {
            if (nums[pivot] == target) {
                if (pivot == nums.length - 1 || nums[pivot + 1] > target) {
                    return pivot;
                } else {
                    start = pivot + 1;
                }
            } else {
                end = pivot - 1;
            }
        }
        return search(nums, target, start, end, isLeft);
    }
}