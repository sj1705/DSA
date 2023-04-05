class Solution {
public:
    int mySqrt(int x) {
        if (x==0) return 0;
        int left{1}, right{x}, mid{x/2};
        while (left<=right) {
            if (mid==0) break;
            
            if (x/mid < mid) {
                right=mid-1;
            }
            
            else if (x/mid > mid) {
                if (x/(mid+1) < mid+1) return mid;
                else left = mid+1;
            }

            else return mid;

            mid=left + (right-left)/2;
        }
        return 1;
    }
};